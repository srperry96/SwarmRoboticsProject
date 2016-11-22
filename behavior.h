#ifndef BEHAVIOR_H_
#define BEHAVIOR_H_

/******************************************************************************/
/******************************************************************************/

#include <vector>

#include "common.h"
#include "agent.h"

/******************************************************************************/
/******************************************************************************/
class CBehavior;

typedef vector<CBehavior*>           TBehaviorVector;
typedef vector<CBehavior*>::iterator TBehaviorVectorIterator;


/******************************************************************************/
/******************************************************************************/


class CBehavior 
{
public:
    CBehavior();
    virtual ~CBehavior();

    virtual bool TakeControl() = 0;
    virtual void Suppress();
    virtual void Action();
    virtual void SimulationStep();

    virtual void SetAgent(CAgent* pc_agent);

protected:
    CAgent*   m_pcAgent;
};

/******************************************************************************/
/******************************************************************************/

#endif

/******************************************************************************/
/******************************************************************************/