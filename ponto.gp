set terminal pdfcairo enhanced font 'Times-New-Roman'
set output "Ponto.pdf"
set title "Ponto fixo para cos(x)-x=0"
set xlabel "Iteração"
set ylabel "Valor de x_0"
set key right top
plot 'Ponto1.dat' w lp pt 7 ps 0.5 t "x_0=0.75", 'Ponto2.dat' w lp pt 8 ps 0.5 t "x_0=1.5"
set output
