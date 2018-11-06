@echo off

set solutiondir=%1
set target=%2

echo Copiando archivos...

mkdir "%target%res\assets"
xcopy "%solutiondir%res\assets" "%target%res\assets" /E /Y /S

echo Copia finalizada
