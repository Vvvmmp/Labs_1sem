<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:template match="CONTENT" >
    <html lang="en" xmlns="http://www.w3.org/1999/xhtml">
      <head>
        <meta charset="UTF-8" />
        <title>Second exercise</title>
      </head>

      <body>
        <table border="1" style="text-align: center;">
          <tr>
            <td>Предмет/ФИО</td>
            <td>KIAR</td>
            <td>OAIP</td>
            <td>OPI</td>
          </tr>
          <xsl:for-each select="STUDENT">
            <tr>
              <td style="text-align:left;"><xsl:value-of select="NAME"/></td>
              <xsl:choose>
                  <xsl:when test="KIAR &gt; 8">
                      <td bgcolor="green"><xsl:value-of select="KIAR"/></td>
                  </xsl:when>
                  <xsl:when test="KIAR &lt; 4">
                      <td bgcolor="red"><xsl:value-of select="KIAR"/></td>
                  </xsl:when>
                  <xsl:otherwise>
                      <td><xsl:value-of select="KIAR"/></td>
                  </xsl:otherwise>
              </xsl:choose>


              
              <xsl:choose>
                  <xsl:when test="OAIP &gt; 8">
                      <td bgcolor="green"><xsl:value-of select="OAIP"/></td>
                  </xsl:when>
                  <xsl:when test="OAIP &lt; 4">
                      <td bgcolor="red"><xsl:value-of select="OAIP"/></td>
                  </xsl:when>
                  <xsl:otherwise>
                      <td><xsl:value-of select="OAIP"/></td>
                  </xsl:otherwise>
              </xsl:choose>
              <xsl:choose>
                  <xsl:when test="OPI &gt; 8">
                      <td bgcolor="green"><xsl:value-of select="OPI"/></td>
                  </xsl:when>
                  <xsl:when test="OPI &lt; 4">
                      <td bgcolor="red"><xsl:value-of select="OPI"/></td>
                  </xsl:when>
                  <xsl:otherwise>
                      <td><xsl:value-of select="OPI"/></td>
                  </xsl:otherwise>
              </xsl:choose>
            </tr>
          </xsl:for-each>
        </table>
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>
