#include "behavior.h"

/******************************************************************************/
/******************************************************************************/

CBehavior::CBehavior()
{

}

/******************************************************************************/
/******************************************************************************/

CBehavior::~CBehavior() 
{
}

/******************************************************************************/
/******************************************************************************/

void CBehavior::Suppress()
{}

/******************************************************************************/
/******************************************************************************/

void CBehavior::Action() 
{}

/******************************************************************************/
/******************************************************************************/

void CBehavior::SimulationStep()
{}

/******************************************************************************/
/******************************************************************************/

void CBehavior::SetAgent(CAgent* pc_agent)
{
    m_pcAgent = pc_agent;
}

/******************************************************************************/
/******************************************************************************/
