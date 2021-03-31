@echo off

cd /D "%~dp0"

IF exist "P:\InventoryMoveSounds\" (
	echo Removing existing link P:\InventoryMoveSounds
	rmdir "P:\InventoryMoveSounds\"
)

echo Creating link P:\InventoryMoveSounds
mklink /J "P:\InventoryMoveSounds\" "%cd%\InventoryMoveSounds\"

echo Done