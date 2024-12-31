<?xml version="1.0" encoding="utf-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="labs">
		<html>
			<head>
				<meta charset="utf-8" />
				<title>1</title>
			</head>
			<body>
				<h2>Shop</h2>
				<table border="1">
					<tr bgcolor="#006699">
						<th>Название</th>
						<th>Описание</th>
						<th>Цена</th>
					</tr>
					<xsl:for-each select="prod">
						
						<xsl:sort select="price" order="ascending" data-type="number"/>
						<tr>
							<td><xsl:value-of select="name"/></td>
							<td><xsl:value-of select="information"/></td>
							<td><xsl:value-of select="price"/></td>
						</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>
