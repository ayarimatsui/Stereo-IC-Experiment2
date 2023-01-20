using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ExhalationManager : MonoBehaviour
{
    public Text ExhalationText;
    public Image ExhalationImage;
    public Slider ExhalationSlider;

    private GameObject ExperimentManagerObject;
    private ExperimentManager experimentManager;

    private float time;
    private bool IsStimulating;

    void Start()
    {
        ExperimentManagerObject = GameObject.Find("ExperimentManager");
        experimentManager = ExperimentManagerObject.GetComponent<ExperimentManager>();

        RectTransform textTransform = ExhalationText.GetComponent<RectTransform>();
        textTransform.localScale = new Vector3(1, 1, 1);

        RectTransform imageTransform = ExhalationImage.GetComponent<RectTransform>();
        imageTransform.localScale = new Vector3(8, 8, 1);
        ExhalationImage.color = new Color32(255, 0, 255, 150);

        ExhalationSlider.value = 0.0f;

        time = 0.0f;
        IsStimulating = true;
    }

    void Update()
    {
        time += Time.deltaTime;
        if (time < 5.0f)
        {
            if (IsStimulating && time >= 3.0f)
            {
                experimentManager.StopShamStimulating();
                IsStimulating = false;
            }

            float x = Mathf.PI * time / 5.0f;

            RectTransform textTransform = ExhalationText.GetComponent<RectTransform>();
            textTransform.localScale = new Vector3(1.0f + 0.2f * Mathf.Cos(x), 1.0f + 0.2f * Mathf.Cos(x), 1.0f);

            RectTransform imageTransform = ExhalationImage.GetComponent<RectTransform>();
            imageTransform.localScale = new Vector3(6.0f + 2.0f * Mathf.Cos(x), 6.0f + 2.0f * Mathf.Cos(x), 1.0f);

            int r = 255;
            int b = (int)(255.0f * Mathf.Abs(Mathf.Cos(x)));
            ExhalationImage.color = new Color32((byte)r, 0, (byte)b, 150);

            ExhalationSlider.value = time / 5.0f;
        }
        else
        {
            experimentManager.StopElectricalStimulation();
            experimentManager.GoToEvaluation();
        }
    }
}
