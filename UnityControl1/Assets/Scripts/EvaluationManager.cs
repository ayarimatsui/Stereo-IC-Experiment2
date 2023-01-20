using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EvaluationManager : MonoBehaviour
{
    public Text InstructionText;

    private GameObject ExperimentManagerObject;
    private ExperimentManager experimentManager;
    
    // Start is called before the first frame update
    void Start()
    {
        ExperimentManagerObject = GameObject.Find("ExperimentManager");
        experimentManager = ExperimentManagerObject.GetComponent<ExperimentManager>();

        if (experimentManager.WithOlfaction)
        {
            InstructionText.text = "Did you perceive the smell of rose?\nバラの匂いを感じましたか？";
        }
        else
        {
            InstructionText.text = "Did you perceive the nasal chemosensation?\n鼻腔内化学感覚を感じましたか？";
        }
    }

    public void YesButtonClicked()
    {
        experimentManager.SaveResult(true);
        experimentManager.CompleteTrial();
    }

    public void NoButtonClicked()
    {
        experimentManager.SaveResult(false);
        experimentManager.CompleteTrial();
    }
}
