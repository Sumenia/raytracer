#include "Config.h"

Config*     Config::_instance = 0;
float       Config::Epsilon = 0.001f;

Config *Config::instance()
{
    if (!_instance) {
        _instance = new Config();
    }
    return _instance;
}

const QVector3D &Config::xAxis() const
{
    return _xAxis;
}

const QVector3D &Config::yAxis() const
{
    return _yAxis;
}

const QVector3D &Config::zAxis() const
{
    return _zAxis;
}

const QString &Config::rootDir() const
{
    return _rootDir;
}

const QString &Config::sceneResourcesDir() const
{
    return _sceneResourcesDir;
}

const QString &Config::outputDir() const
{
    return _outputDir;
}

bool Config::shadowEnabled() const
{
    return _shadowEnabled;
}

void Config::setShadowEnabled(bool shadowEnabled)
{
    _shadowEnabled = shadowEnabled;
}

int Config::threadNumber() const
{
    return _threadNumber;
}

void Config::setThreadNumber(int threadNumber)
{
    _threadNumber = threadNumber;
}

int Config::renderingTaskNumber() const
{
    return _renderingTaskNumber;
}

void Config::setRenderingTask(int renderingTaskNumber)
{
    _renderingTaskNumber = renderingTaskNumber;
}

int Config::lightSampleNumber() const
{
    return _lightSampleNumber;
}

void Config::setLightSampleNumber(int lightSampleNumber)
{
    _lightSampleNumber = lightSampleNumber;
}

int Config::antialiasingResolution() const
{
    return _antialiasingResolution;
}

void Config::setAntialiasingResolution(int antialiasingResolution)
{
    _antialiasingResolution = antialiasingResolution;
}

Config::AntialiasingType Config::antialiasingType() const
{
    return _antialiasingType;
}

void Config::setAntialiasingType(Config::AntialiasingType antialiasingType)
{
    _antialiasingType = antialiasingType;
}

int Config::maximumNodesPerBox() const
{
    return _maximumNodesPerBox;
}

void Config::setMaximumNodesPerBox(int maximumNodesPerBox)
{
    _maximumNodesPerBox = maximumNodesPerBox;
}

Integrator::Type Config::integrator() const
{
    return _integrator;
}

void Config::setIntegrator(Integrator::Type integrator)
{
    _integrator = integrator;
}

int Config::pathtracingPathDepth() const
{
    return _pathtracingPathDepth;
}

void Config::setPathtracingPathDepth(int pathtracingPathDepth)
{
    _pathtracingPathDepth = pathtracingPathDepth;
}

int Config::photonMappingPhotonNumber() const
{
    return _photonMappingPhotonNumber;
}

void Config::setPhotonMappingPhotonNumber(int photonNumber)
{
    _photonMappingPhotonNumber = photonNumber;
}

int Config::photonMappingNumberNearestPhoton() const
{
    return _photonMappingNumberNearestPhoton;
}

void Config::setPhotonMappingNumberNearestPhoton(int numberNearestPhoton)
{
    _photonMappingNumberNearestPhoton = numberNearestPhoton;
}

float Config::photonMappingMaximumSearchRadius() const
{
    return _photonMappingMaximumSearchRadius;
}

void Config::setPhotonMappingMaximumSearchRadius(float photonMaximumRadius)
{
    _photonMappingMaximumSearchRadius = photonMaximumRadius;
}

int Config::photonMappingMapDepth() const
{
    return _photonMappingMapDepth;
}

void Config::setPhotonMappingMapDepth(int photonMappingMapDepth)
{
    _photonMappingMapDepth = photonMappingMapDepth;
}

int Config::photonMappingRayDepth() const
{
    return _photonMappingRayDepth;
}

void Config::setPhotonMappingRayDepth(int photonMappingRayDepth)
{
    _photonMappingRayDepth = photonMappingRayDepth;
}

float Config::refractionIndex() const
{
    return _refractionIndex;
}

void Config::setRefractionIndex(float refractionIndex)
{
    _refractionIndex = refractionIndex;
}

float Config::defaultCameraVerticalFOV() const
{
    return _defaultCameraVerticalFOV;
}

float Config::defaultCameraAspectRatio() const
{
    return _defaultCameraAspectRatio;
}

float Config::defaultCameraAperture() const
{
    return _defaultCameraAperture;
}

float Config::defaultCameraFocusPlane() const
{
    return _defaultCameraFocusPlane;
}

int Config::defaultImageWidth() const
{
    return _defaultImageWidth;
}

int Config::defaultImageHeight() const
{
    return _defaultImageHeight;
}

Config::Config()
{
    _xAxis = QVector3D(1.0f, 0.0f, 0.0f);
    _yAxis = QVector3D(0.0f, 1.0f, 0.0f);
    _zAxis = QVector3D(0.0f, 0.0f, 1.0f);
    _rootDir = "C:/Users/samuel/Documents/Dev/Raytracer/";
    _sceneResourcesDir = _rootDir + "Resources/Scene/";
    _outputDir = _rootDir + "Output/";
    _shadowEnabled = true;
    _threadNumber = 8;
    _renderingTaskNumber = 2000;
    _lightSampleNumber = 2;
    _antialiasingResolution = 1;
    _antialiasingType = AntialiasingType::Jittered;
    _maximumNodesPerBox = 10;

    _integrator = Integrator::Pathtracing;

    _pathtracingPathDepth = 5;

    _photonMappingPhotonNumber = 100000;
    _photonMappingNumberNearestPhoton = 700;
    _photonMappingMaximumSearchRadius = 0.0001f;
    _photonMappingMapDepth = 10;
    _photonMappingRayDepth = 5;

    _refractionIndex = 1.003f;

    _defaultCameraVerticalFOV = 40.0f;
    _defaultCameraAspectRatio = 1.33f;
    _defaultCameraAperture = 0.0f;
    _defaultCameraFocusPlane = 1.0f;
    _defaultImageWidth = 800;
    _defaultImageHeight = 600;
}

Config::~Config()
{
}
