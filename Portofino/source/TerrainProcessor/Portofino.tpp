<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>Portofino</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>roads.shp</Shapefile>
            <TaskName>Heightmap: Road integration</TaskName>
            <DEMInputFilename>P:\Portofino\source\QGIS\gtt_export\gtt_heightmap.asc</DEMInputFilename>
            <DEMOutputFilename>P:\Portofino\source\QGIS\gtt_export\gtt_heightmap_primary_secondary.asc</DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Level out roads flat</Notes>
            <Parameters>
                <Parameter Name="Road width" Type="0" Value="12"/>
                <Parameter Name="Terrain affected range" Type="0" Value="12"/>
                <Parameter Name="Road maximal slope" Type="0" Value="16"/>
                <Parameter Name="Side maximal slope" Type="0" Value="0"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>roads.shp</Shapefile>
            <TaskName>Line: Regular</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Place roads automatically</Notes>
            <Parameters>
                <Parameter Name="Objects distance" Type="0" Value="6"/>
                <Parameter Name="Centerline offset" Type="0" Value="0"/>
                <Parameter Name="Spline interpolation" Type="0" Value="1"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="asf1_6"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="6"/>
                    <Parameter Name="RANDROT" Value="0"/>
                    <Parameter Name="ROTATION" Value="90"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>forest.shp</Shapefile>
            <TaskName>Area: High-density Cluster</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>Import forest</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="100"/>
                <Parameter Name="Fraction" Type="0" Value="1"/>
                <Parameter Name="Blend distance" Type="0" Value="5"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_betulapendula_2fb"/>
                    <Parameter Name="PROB" Value="30"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_fagussylvatica_2fb"/>
                    <Parameter Name="PROB" Value="30"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_pinussylvestris_2fb"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_quercusrobur_2fb"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_juglansregia_3s"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_rosacanina_2s"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_crataeguslaevigata_1s"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_fagussylvatica_3f"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
