# boxGame_Arduino

<html xmlns:v="urn:schemas-microsoft-com:vml"
xmlns:o="urn:schemas-microsoft-com:office:office"
xmlns:w="urn:schemas-microsoft-com:office:word"
xmlns:dt="uuid:C2F41010-65B3-11d1-A29F-00AA00C14882"
xmlns:m="http://schemas.microsoft.com/office/2004/12/omml"
xmlns="http://www.w3.org/TR/REC-html40">

<head>
<meta http-equiv=Content-Type content="text/html; charset=gb2312">
<meta name=ProgId content=Word.Document>
<meta name=Generator content="Microsoft Word 15">
<meta name=Originator content="Microsoft Word 15">
<link rel=File-List href="README.files/filelist.xml">
<!--[if gte mso 9]><xml>
 <o:DocumentProperties>
  <o:Author>名字太长是不是会被人打</o:Author>
  <o:LastAuthor>梁 翔鸣</o:LastAuthor>
  <o:Revision>2</o:Revision>
  <o:TotalTime>2</o:TotalTime>
  <o:Created>2018-09-30T17:31:00Z</o:Created>
  <o:LastSaved>2018-09-30T17:31:00Z</o:LastSaved>
  <o:Pages>6</o:Pages>
  <o:Words>398</o:Words>
  <o:Characters>2273</o:Characters>
  <o:Lines>18</o:Lines>
  <o:Paragraphs>5</o:Paragraphs>
  <o:CharactersWithSpaces>2666</o:CharactersWithSpaces>
  <o:Version>16.00</o:Version>
 </o:DocumentProperties>
 <o:CustomDocumentProperties>
  <o:KSOProductBuildVer dt:dt="string">2052-10.1.0.6929</o:KSOProductBuildVer>
 </o:CustomDocumentProperties>
</xml><![endif]-->
<link rel=dataStoreItem href="README.files/item0001.xml"
target="README.files/props002.xml">
<link rel=themeData href="README.files/themedata.thmx">
<link rel=colorSchemeMapping href="README.files/colorschememapping.xml">
<!--[if gte mso 9]><xml>
 <w:WordDocument>
  <w:SpellingState>Clean</w:SpellingState>
  <w:GrammarState>Clean</w:GrammarState>
  <w:TrackMoves>false</w:TrackMoves>
  <w:TrackFormatting/>
  <w:PunctuationKerning/>
  <w:DrawingGridVerticalSpacing>7.8 磅</w:DrawingGridVerticalSpacing>
  <w:DisplayHorizontalDrawingGridEvery>0</w:DisplayHorizontalDrawingGridEvery>
  <w:DisplayVerticalDrawingGridEvery>2</w:DisplayVerticalDrawingGridEvery>
  <w:ValidateAgainstSchemas/>
  <w:SaveIfXMLInvalid>false</w:SaveIfXMLInvalid>
  <w:IgnoreMixedContent>false</w:IgnoreMixedContent>
  <w:AlwaysShowPlaceholderText>false</w:AlwaysShowPlaceholderText>
  <w:DoNotPromoteQF/>
  <w:LidThemeOther>EN-US</w:LidThemeOther>
  <w:LidThemeAsian>ZH-CN</w:LidThemeAsian>
  <w:LidThemeComplexScript>X-NONE</w:LidThemeComplexScript>
  <w:Compatibility>
   <w:SpaceForUL/>
   <w:BalanceSingleByteDoubleByteWidth/>
   <w:DoNotLeaveBackslashAlone/>
   <w:ULTrailSpace/>
   <w:DoNotExpandShiftReturn/>
   <w:AdjustLineHeightInTable/>
   <w:BreakWrappedTables/>
   <w:SnapToGridInCell/>
   <w:WrapTextWithPunct/>
   <w:UseAsianBreakRules/>
   <w:UseWord2010TableStyleRules/>
   <w:DontGrowAutofit/>
   <w:SplitPgBreakAndParaMark/>
   <w:EnableOpenTypeKerning/>
   <w:DontFlipMirrorIndents/>
   <w:OverrideTableStyleHps/>
   <w:UseFELayout/>
  </w:Compatibility>
  <w:DoNotOptimizeForBrowser/>
  <m:mathPr>
   <m:mathFont m:val="Cambria Math"/>
   <m:brkBin m:val="before"/>
   <m:brkBinSub m:val="&#45;-"/>
   <m:smallFrac m:val="off"/>
   <m:dispDef/>
   <m:lMargin m:val="0"/>
   <m:rMargin m:val="0"/>
   <m:defJc m:val="centerGroup"/>
   <m:wrapIndent m:val="1440"/>
   <m:intLim m:val="subSup"/>
   <m:naryLim m:val="undOvr"/>
  </m:mathPr></w:WordDocument>
</xml><![endif]--><!--[if gte mso 9]><xml>
 <w:LatentStyles DefLockedState="false" DefUnhideWhenUsed="false"
  DefSemiHidden="false" DefQFormat="false" LatentStyleCount="375">
  <w:LsdException Locked="false" QFormat="true" Name="Normal"/>
  <w:LsdException Locked="false" QFormat="true" Name="heading 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   QFormat="true" Name="heading 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   QFormat="true" Name="heading 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   QFormat="true" Name="heading 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   QFormat="true" Name="heading 5"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   QFormat="true" Name="heading 6"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   QFormat="true" Name="heading 7"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   QFormat="true" Name="heading 8"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   QFormat="true" Name="heading 9"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   QFormat="true" Name="caption"/>
  <w:LsdException Locked="false" QFormat="true" Name="Title"/>
  <w:LsdException Locked="false" Priority="1" SemiHidden="true" QFormat="true"
   Name="Default Paragraph Font"/>
  <w:LsdException Locked="false" QFormat="true" Name="Subtitle"/>
  <w:LsdException Locked="false" QFormat="true" Name="Strong"/>
  <w:LsdException Locked="false" QFormat="true" Name="Emphasis"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true"
   UnhideWhenUsed="true" Name="HTML Top of Form"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true"
   UnhideWhenUsed="true" Name="HTML Bottom of Form"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   QFormat="true" Name="Normal Table"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true"
   UnhideWhenUsed="true" Name="No List"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true"
   UnhideWhenUsed="true" Name="Outline List 1"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true"
   UnhideWhenUsed="true" Name="Outline List 2"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true"
   UnhideWhenUsed="true" Name="Outline List 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Simple 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Simple 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Simple 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Classic 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Classic 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Classic 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Classic 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Colorful 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Colorful 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Colorful 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Columns 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Columns 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Columns 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Columns 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Columns 5"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 5"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 6"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 7"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 8"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 5"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 6"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 7"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 8"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table 3D effects 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table 3D effects 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table 3D effects 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Contemporary"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Elegant"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Professional"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Subtle 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Subtle 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Web 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Web 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Web 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Theme"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true"
   Name="Placeholder Text"/>
  <w:LsdException Locked="false" Priority="99" Name="No Spacing"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 1"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 1"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 1"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 1"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 1"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 1"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true" Name="Revision"/>
  <w:LsdException Locked="false" Priority="99" Name="List Paragraph"/>
  <w:LsdException Locked="false" Priority="99" Name="Quote"/>
  <w:LsdException Locked="false" Priority="99" Name="Intense Quote"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 1"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 1"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 1"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 1"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 1"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 1"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 1"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 1"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 2"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 2"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 2"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 2"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 2"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 2"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 2"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 2"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 2"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 2"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 2"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 2"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 2"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 2"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 3"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 3"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 3"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 3"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 3"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 3"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 3"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 3"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 3"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 3"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 3"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 3"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 3"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 3"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 4"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 4"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 4"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 4"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 4"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 4"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 4"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 4"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 4"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 4"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 4"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 4"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 4"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 4"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 5"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 5"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 5"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 5"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 5"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 5"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 5"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 5"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 5"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 5"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 5"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 5"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 5"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 5"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 6"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 6"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 6"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 6"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 6"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 6"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 6"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 6"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 6"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 6"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 6"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 6"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 6"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 6"/>
  <w:LsdException Locked="false" Priority="19" QFormat="true"
   Name="Subtle Emphasis"/>
  <w:LsdException Locked="false" Priority="21" QFormat="true"
   Name="Intense Emphasis"/>
  <w:LsdException Locked="false" Priority="31" QFormat="true"
   Name="Subtle Reference"/>
  <w:LsdException Locked="false" Priority="32" QFormat="true"
   Name="Intense Reference"/>
  <w:LsdException Locked="false" Priority="33" QFormat="true" Name="Book Title"/>
  <w:LsdException Locked="false" Priority="37" SemiHidden="true"
   UnhideWhenUsed="true" Name="Bibliography"/>
  <w:LsdException Locked="false" Priority="39" SemiHidden="true"
   UnhideWhenUsed="true" QFormat="true" Name="TOC Heading"/>
  <w:LsdException Locked="false" Priority="41" Name="Plain Table 1"/>
  <w:LsdException Locked="false" Priority="42" Name="Plain Table 2"/>
  <w:LsdException Locked="false" Priority="43" Name="Plain Table 3"/>
  <w:LsdException Locked="false" Priority="44" Name="Plain Table 4"/>
  <w:LsdException Locked="false" Priority="45" Name="Plain Table 5"/>
  <w:LsdException Locked="false" Priority="40" Name="Grid Table Light"/>
  <w:LsdException Locked="false" Priority="46" Name="Grid Table 1 Light"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark"/>
  <w:LsdException Locked="false" Priority="51" Name="Grid Table 6 Colorful"/>
  <w:LsdException Locked="false" Priority="52" Name="Grid Table 7 Colorful"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 1"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 1"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 1"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 1"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 1"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 1"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 1"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 2"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 2"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 2"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 2"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 2"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 2"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 2"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 3"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 3"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 3"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 3"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 3"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 3"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 3"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 4"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 4"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 4"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 4"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 4"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 4"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 4"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 5"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 5"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 5"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 5"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 5"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 5"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 5"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 6"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 6"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 6"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 6"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 6"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 6"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 6"/>
  <w:LsdException Locked="false" Priority="46" Name="List Table 1 Light"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark"/>
  <w:LsdException Locked="false" Priority="51" Name="List Table 6 Colorful"/>
  <w:LsdException Locked="false" Priority="52" Name="List Table 7 Colorful"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 1"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 1"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 1"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 1"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 1"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 1"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 1"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 2"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 2"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 2"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 2"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 2"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 2"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 2"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 3"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 3"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 3"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 3"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 3"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 3"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 3"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 4"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 4"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 4"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 4"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 4"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 4"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 4"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 5"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 5"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 5"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 5"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 5"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 5"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 5"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 6"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 6"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 6"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 6"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 6"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 6"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 6"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true"
   UnhideWhenUsed="true" Name="Mention"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true"
   UnhideWhenUsed="true" Name="Smart Hyperlink"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true"
   UnhideWhenUsed="true" Name="Hashtag"/>
  <w:LsdException Locked="false" Priority="99" SemiHidden="true"
   UnhideWhenUsed="true" Name="Unresolved Mention"/>
 </w:LatentStyles>
</xml><![endif]-->
<style>
<!--
 /* Font Definitions */
 @font-face
	{font-family:宋体;
	panose-1:2 1 6 0 3 1 1 1 1 1;
	mso-font-alt:SimSun;
	mso-font-charset:134;
	mso-generic-font-family:auto;
	mso-font-pitch:variable;
	mso-font-signature:3 680460288 22 0 262145 0;}
@font-face
	{font-family:"Cambria Math";
	panose-1:2 4 5 3 5 4 6 3 2 4;
	mso-font-charset:0;
	mso-generic-font-family:roman;
	mso-font-pitch:variable;
	mso-font-signature:3 0 0 0 1 0;}
@font-face
	{font-family:微软雅黑;
	panose-1:2 11 5 3 2 2 4 2 2 4;
	mso-font-charset:134;
	mso-generic-font-family:swiss;
	mso-font-pitch:variable;
	mso-font-signature:-2147483001 718224464 22 0 262175 0;}
@font-face
	{font-family:"\@微软雅黑";
	mso-font-charset:134;
	mso-generic-font-family:swiss;
	mso-font-pitch:variable;
	mso-font-signature:-2147483001 718224464 22 0 262175 0;}
@font-face
	{font-family:"\@宋体";
	panose-1:2 1 6 0 3 1 1 1 1 1;
	mso-font-charset:134;
	mso-generic-font-family:auto;
	mso-font-pitch:variable;
	mso-font-signature:3 680460288 22 0 262145 0;}
 /* Style Definitions */
 p.MsoNormal, li.MsoNormal, div.MsoNormal
	{mso-style-unhide:no;
	mso-style-qformat:yes;
	mso-style-parent:"";
	margin:0cm;
	margin-bottom:.0001pt;
	text-align:justify;
	text-justify:inter-ideograph;
	mso-pagination:widow-orphan;
	font-size:10.5pt;
	mso-bidi-font-size:10.0pt;
	font-family:"Calibri",sans-serif;
	mso-ascii-font-family:Calibri;
	mso-ascii-theme-font:minor-latin;
	mso-fareast-font-family:宋体;
	mso-hansi-font-family:Calibri;
	mso-hansi-theme-font:minor-latin;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;
	mso-font-kerning:1.0pt;}
h1
	{mso-style-unhide:no;
	mso-style-qformat:yes;
	mso-style-next:正文;
	margin-top:17.0pt;
	margin-right:0cm;
	margin-bottom:16.5pt;
	margin-left:0cm;
	text-align:center;
	line-height:240%;
	mso-pagination:widow-orphan lines-together;
	page-break-after:avoid;
	mso-outline-level:1;
	font-size:22.0pt;
	mso-bidi-font-size:10.0pt;
	font-family:"Calibri",sans-serif;
	mso-ascii-font-family:Calibri;
	mso-ascii-theme-font:minor-latin;
	mso-fareast-font-family:微软雅黑;
	mso-hansi-font-family:Calibri;
	mso-hansi-theme-font:minor-latin;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;
	mso-font-kerning:22.0pt;
	font-weight:normal;}
span.SpellE
	{mso-style-name:"";
	mso-spl-e:yes;}
span.GramE
	{mso-style-name:"";
	mso-gram-e:yes;}
.MsoChpDefault
	{mso-style-type:export-only;
	mso-default-props:yes;
	font-size:10.0pt;
	mso-ansi-font-size:10.0pt;
	mso-bidi-font-size:10.0pt;
	font-family:"Calibri",sans-serif;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;
	mso-font-kerning:0pt;}
 /* Page Definitions */
 @page
	{mso-page-border-surround-header:no;
	mso-page-border-surround-footer:no;}
@page WordSection1
	{size:612.0pt 792.0pt;
	margin:72.0pt 54.0pt 72.0pt 54.0pt;
	mso-header-margin:36.0pt;
	mso-footer-margin:36.0pt;
	mso-paper-source:0;
	layout-grid:15.6pt;}
div.WordSection1
	{page:WordSection1;}
-->
</style>
<!--[if gte mso 10]>
<style>
 /* Style Definitions */
 table.MsoNormalTable
	{mso-style-name:普通表格;
	mso-tstyle-rowband-size:0;
	mso-tstyle-colband-size:0;
	mso-style-noshow:yes;
	mso-style-priority:99;
	mso-style-parent:"";
	mso-padding-alt:0cm 5.4pt 0cm 5.4pt;
	mso-para-margin:0cm;
	mso-para-margin-bottom:.0001pt;
	mso-pagination:widow-orphan;
	font-size:10.0pt;
	font-family:"Calibri",sans-serif;
	mso-ascii-font-family:Calibri;
	mso-ascii-theme-font:minor-latin;
	mso-hansi-font-family:Calibri;
	mso-hansi-theme-font:minor-latin;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;}
</style>
<![endif]--><!--[if gte mso 9]><xml>
 <o:shapedefaults v:ext="edit" spidmax="1026"/>
</xml><![endif]--><!--[if gte mso 9]><xml>
 <o:shapelayout v:ext="edit">
  <o:idmap v:ext="edit" data="1"/>
 </o:shapelayout></xml><![endif]-->
</head>

<body lang=ZH-CN style='tab-interval:21.0pt;text-justify-trim:punctuation'>

<div class=WordSection1 style='layout-grid:15.6pt'>

<h1 style='margin:0cm;margin-bottom:.0001pt;line-height:normal'><span
class=SpellE><b><span lang=EN-US style='font-size:20.0pt;mso-bidi-font-size:
9.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>boxGame_Arduino</span></b></span><b><span
lang=EN-US style='font-size:20.0pt;mso-bidi-font-size:9.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p></o:p></span></b></h1>

<h1 style='margin:0cm;margin-bottom:.0001pt;line-height:normal'><b><span
style='font-size:20.0pt;mso-bidi-font-size:9.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>简单方块游戏<span lang=EN-US><o:p></o:p></span></span></b></h1>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=center style='text-align:center'><span
style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>这是我的课程期末作业，一款基于<span lang=EN-US>Arduino</span>的简单游戏<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>一、游戏前准备<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>当玩家插上电源，设备首先会测量环境光照强度，玩家需要依据画面指示配合完成设备的光照适应调整。之后即可开始游戏。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>二、游戏过程<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>游戏画面会显示一个方块从远处而来，当方块移动到玩家面前时（也就是当<span lang=EN-US>LED</span>点阵上一半的灯泡都亮起的时候），玩家需要做出反应来跨越（或躲避）方块。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>三、游戏规则<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>1</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>、游戏设有<span
lang=EN-US>10</span>个关卡，每当玩家跨越一个方块，分数加<span lang=EN-US>1</span>分，<span
lang=EN-US>10</span>个关卡完成后总分为<span lang=EN-US>260</span>分。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>2</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>、玩家可以选择<b>站立</b>、<b>跳起</b>或<b>蹲下</b>三种姿势，正常情况下，玩家状态为站立，如果玩家需要跳起：<b>玩家需要双脚离开设备上的相应的两个光明电阻</b>；如果玩家需要蹲下：<b>玩家需要同时遮盖住三个光敏电阻，这意味着玩家必须蹲下并用手遮住第三个光敏电阻</b>。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>3</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>、<b><i><span
style='color:black;mso-themecolor:text1'>当有方块从上方移动而来，到达玩家跟前时，玩家需要跳起；当有方块从下方移动而来，到达玩家跟前时，玩家需要蹲下。</span></i><span
lang=EN-US style='color:red'><o:p></o:p></span></b></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>4</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>、当玩家有一只脚（当然也包括两只）踩在设备上，游戏开始；之后，只要玩家有一只脚（当然也包括两只）踩在设备上，游戏就会继续；否则，游戏结束。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>四、注意事项<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>1</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>、玩家应尽可能<b>把握<span
class=GramE>准行动</span>时机</b>，过早或过晚地跳起或蹲下都不会作数。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>2</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>、<b>玩家应确保行动后双脚仍然有一只及以上遮盖在光敏电阻上</b>，而不是恰好踩在光敏电阻旁边（特别是跳起落地后），这会导致设备以为玩家离开游戏，游戏结束。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>3</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>、<b>每一次开机都需要重新测光调整设备，较远距离的移动设备也应重<span
class=GramE>启设备</span>重新测光。<span lang=EN-US><o:p></o:p></span></b></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>4</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>、游戏设有“最高分”，当玩家最终分数超过当前最高分时，就会显示破纪录动画；不过遗憾的是，这个<b>“最高分”并不能永久地保存，当设备关闭后，所有数据都会丢失</b>，再次游戏时，上一次的“最高分”清零。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>程序相关<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><b><span
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>请参见文件：<span class=SpellE><span lang=EN-US>boxgame.ino</span></span><span
lang=EN-US><o:p></o:p></span></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><b><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>游戏程序包括<span lang=EN-US>2.0</span>和<span lang=EN-US>3.0</span><span
class=GramE>两</span>个版本。简单来说，<span lang=EN-US>2.0</span>版本是一个半成品，不支持移位寄存器，并且没有全部的动画效果，没有音效，没有难度变化和关卡等等。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>3.0</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>版本则是完整的游戏，鉴于硬件和本人编程技术的限制，虽然它仍然有诸多不足、游戏的体验仍然不尽人意，不过它比<span
lang=EN-US>2.0</span>更好。<span lang=EN-US>3.0</span>经过了多次的优化和调整，增加了更多的功能和交互，每一个功能都被写成了函数分成一个个模块。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>playsound</span></b></span><b><span lang=EN-US
style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>() </span></b><b><span style='font-size:14.0pt;
mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>声音播放<span lang=EN-US><o:p></o:p></span></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑;color:#0009C0'>void <span class=SpellE><span
class=GramE>palysound</span></span><span class=GramE>(</span>int t, int mode =
1, int del = 1000);<o:p></o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>t</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>：表示蜂鸣器发出的频率。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>mode</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>：可以输入<span
lang=EN-US>0</span>，<span lang=EN-US>1</span>，<span lang=EN-US>2</span>，表示<span
lang=EN-US>3</span>中声音播放模式<span lang=EN-US>,</span>默认值为<span lang=EN-US>1</span>：<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><span style='mso-tab-count:1'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span>0</span><span
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>：设置<span lang=EN-US>IO</span>口为“输出”，并持续播放一个音调（<span
lang=EN-US>t</span>）；<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><span style='mso-tab-count:1'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span>1</span><span
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>：设置<span lang=EN-US>IO</span>口为“输出”，并播放一个音调（<span
lang=EN-US>t</span>）持续<span lang=EN-US> del </span>毫秒，设置<span lang=EN-US>IO</span>口为“输<span
lang=EN-US><span style='mso-tab-count:2'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></span>入”；<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><span style='mso-tab-count:1'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span>2</span><span
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>：设置<span lang=EN-US>IO</span>口为“输出”，并播放从音调（<span
lang=EN-US>t</span>）开始持续上升的声音，设置<span lang=EN-US>IO</span>口为“输入”。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>del</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>：表示声音播放时间，默认值为<span
lang=EN-US>1</span>。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><b><span lang=EN-US
style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>display() LED</span></b><b><span style='font-size:
14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>控制（显示画面）<span lang=EN-US><o:p></o:p></span></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑;color:#0009C0'>void <span class=GramE>display(</span>byte
<span class=SpellE>dat</span>[8], int del);<o:p></o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><span
lang=EN-US style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>dat</span></span><span lang=EN-US style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>[8]</span><span style='font-size:11.0pt;mso-bidi-font-size:10.0pt;
font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>：表示要显示的画面，是一个包含<span
lang=EN-US>8</span>个二进制数元素的一维数组；<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>del</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>：表示画面显示时长。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>display_boxDown</span></b></span><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>() LED</span></b><b><span style='font-size:14.0pt;
mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>控制（上下颠倒显示画面）<span lang=EN-US><o:p></o:p></span></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑;color:#0009C0'>void <span class=SpellE>display_<span
class=GramE>boxDown</span></span><span class=GramE>(</span>byte <span
class=SpellE>dat</span>[8], int del);<o:p></o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><span
lang=EN-US style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>dat</span></span><span lang=EN-US style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>[8]</span><span style='font-size:11.0pt;mso-bidi-font-size:10.0pt;
font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>：表示将要显示画面的上下颠倒的画面，是一个包含<span
lang=EN-US>8</span>个二进制数元素的一维数组；<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>del</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>：表示画面显示时长。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><span
class=GramE><b><span lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:
11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>RandomBoxComing</span></b></span></span><span
class=GramE><b><span lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:
11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>(</span></b></span><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>)<o:p></o:p></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑;color:#0009C0'>int <span class=SpellE><span
class=GramE>RandomBoxComing</span></span><span class=GramE>(</span>);<o:p></o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>无输入，返回一个<span lang=EN-US>int</span>值。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数将随机生成箱子并将其显示在<span lang=EN-US>LED</span>点阵上，并返回当前箱子的位置（即<span
class=GramE>上方<span lang=EN-US>/</span>下方</span>）。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数中调用了其他函数：<span class=SpellE><span lang=EN-US>playsound</span></span><span
lang=EN-US>()</span>、<span lang=EN-US>display()</span>、<span class=SpellE><span
lang=EN-US>display_boxDown</span></span><span lang=EN-US>()</span>。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><span
class=GramE><b><span lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:
11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>whatShouldPlayerDo</span></b></span></span><span
class=GramE><b><span lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:
11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>(</span></b></span><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>)<o:p></o:p></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑;color:#0009C0'>void <span class=SpellE>whatShouldPlayerDo</span>(int
left, int right)</span><span style='font-size:12.0pt;mso-bidi-font-size:10.5pt;
font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑;color:#0009C0'>；<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>left</span><span style='font-size:11.0pt;mso-bidi-font-size:
10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>：表示当前左脚位置光敏电阻的读数；<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>right</span><span style='font-size:11.0pt;
mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>：表示当前右脚位置光敏电阻的读数。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数将根据当前箱子状态，判断玩家是否做出相应的动作并决定游戏是否继续。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数中调用了其他函数：<span class=SpellE><span lang=EN-US>playsound</span></span><span
lang=EN-US>()</span>、<span class=SpellE><span lang=EN-US>game_end</span></span><span
lang=EN-US>()<o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数使用了全局变量：<span class=SpellE><span lang=EN-US>up_or_down</span></span>、<span
lang=EN-US>score</span>。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>game_<span class=GramE>start</span></span></b></span><span
class=GramE><b><span lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:
11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>(</span></b></span><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>)<o:p></o:p></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑;color:#0009C0'>void <span class=SpellE>game_<span
class=GramE>start</span></span><span class=GramE>(</span>);<o:p></o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>无输入，无返回值。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数将显示游戏开始动画，并标明游戏状态为“开始”而不是“无人游戏”。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数中调用了其他函数：<span lang=EN-US>display()</span>。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数使用了全局变量：<span lang=EN-US>flag</span>。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>game_<span class=GramE>end</span></span></b></span><span
class=GramE><b><span lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:
11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>(</span></b></span><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>)<o:p></o:p></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑;color:#0009C0'>void <span class=SpellE>game_<span
class=GramE>end</span></span><span class=GramE>(</span>);<o:p></o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>无输入，无返回值。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数在游戏结束时被调用，它将判断玩家是否胜利并播放相应的动画，然后调用“最高分”函数来判断是否播放最高分动画，最后显示玩家分数并重置游戏数据（不会重置“最高分”）。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数中调用了其他函数：<span lang=EN-US>display()</span>、<span class=SpellE><span
lang=EN-US>bestScore</span></span><span lang=EN-US>()</span>。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数使用了全局变量：<span lang=EN-US>flag</span>、<span lang=EN-US>score</span>。<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>level_<span class=GramE>pass</span></span></b></span><span
class=GramE><b><span lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:
11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>(</span></b></span><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>)<o:p></o:p></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑;color:#0009C0'>void <span class=SpellE>level_<span
class=GramE>pass</span></span><span class=GramE>(</span>);<o:p></o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>无输入，无返回值。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数将显示通关动画。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数中调用了其他函数：<span lang=EN-US>display()</span>。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal><span lang=EN-US style='font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>the_game_<span class=GramE>difficulty</span></span></b></span><span
class=GramE><b><span lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:
11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>(</span></b></span><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>)<o:p></o:p></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑;color:#0009C0'>void<span
style='mso-spacerun:yes'>&nbsp; </span><span class=SpellE>the_game_difficulty</span>(int
level)</span><span style='font-size:12.0pt;mso-bidi-font-size:10.5pt;
font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑;color:#0009C0'>；<span
lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>level</span><span style='font-size:11.0pt;
mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>：表示当前关卡（事实上是当前分数：<span lang=EN-US>score</span>）。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数设置了游戏的难度变化和关卡。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数中调用了其他函数：<span class=SpellE><span lang=EN-US>level_pass</span></span><span
lang=EN-US>()</span>。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数使用了全局变量：<span lang=EN-US>speed</span>。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>light_<span class=GramE>adapt</span></span></b></span><span
class=GramE><b><span lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:
11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>(</span></b></span><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>)<o:p></o:p></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑;color:#0009C0'>void <span class=SpellE>light_<span
class=GramE>adapt</span></span><span class=GramE>(</span>);<o:p></o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>无输入，无返回值。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数用来测量环境光照强度，并对一些条件数值进行合适的初始化。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数中调用了其他函数：<span class=SpellE><span lang=EN-US>playsound</span></span><span
lang=EN-US>()</span>、<span lang=EN-US>display()<o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数中使用了全局变量：<span class=SpellE><span lang=EN-US>left_light</span></span><span
lang=EN-US>(</span>默认值<span lang=EN-US>900)</span>、<span class=SpellE><span
lang=EN-US>right_light</span></span><span lang=EN-US>(</span>默认值<span
lang=EN-US>710)</span>、<span class=SpellE><span lang=EN-US>hand_light</span></span><span
lang=EN-US>(</span>默认值<span lang=EN-US>850)</span>。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span class=SpellE><span
class=GramE><b><span lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:
11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>bestScore</span></b></span></span><span
class=GramE><b><span lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:
11.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'>(</span></b></span><b><span
lang=EN-US style='font-size:14.0pt;mso-bidi-font-size:11.0pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑'>)<o:p></o:p></span></b></p>

<p class=MsoNormal align=left style='text-align:left'><span lang=EN-US
style='font-size:12.0pt;mso-bidi-font-size:10.5pt;font-family:"微软雅黑",sans-serif;
mso-bidi-font-family:微软雅黑;color:#0009C0'>void <span class=SpellE><span
class=GramE>bestScore</span></span><span class=GramE>(</span>);<o:p></o:p></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>无输入，无返回值。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数用来判断最终分数是否为“最高分”，是则记录新纪录并播放动画，否则不执行多余动作。<span lang=EN-US><o:p></o:p></span></span></p>

<p class=MsoNormal align=left style='text-align:left'><span style='font-size:
11.0pt;mso-bidi-font-size:10.0pt;font-family:"微软雅黑",sans-serif;mso-bidi-font-family:
微软雅黑'>这个函数中调用了其他函数：<span lang=EN-US>display()</span>。</span><span lang=EN-US
style='font-family:"微软雅黑",sans-serif;mso-bidi-font-family:微软雅黑'><o:p></o:p></span></p>

</div>

</body>

</html>
