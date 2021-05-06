#define DISABLE_PERSISTENCY

#include "$CurrentDir:@Portofino\\missions\\empty.Portofino\\core\\BaseModuleInclude.c"
  
Mission CreateCustomMission(string path)
{	
    if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
        return new CommunityOfflineServer();

    return new CommunityOfflineClient();
}

void main()
{
    //In Beta We Trust!
}