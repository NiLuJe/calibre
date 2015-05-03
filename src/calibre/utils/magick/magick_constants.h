// Generated by generate.py

static void magick_add_module_constants(PyObject *m) {
    PyModule_AddIntConstant(m, "UndefinedFilter", 0);
    PyModule_AddIntConstant(m, "PointFilter", 1);
    PyModule_AddIntConstant(m, "BoxFilter", 2);
    PyModule_AddIntConstant(m, "TriangleFilter", 3);
    PyModule_AddIntConstant(m, "HermiteFilter", 4);
    PyModule_AddIntConstant(m, "HanningFilter", 5);
    PyModule_AddIntConstant(m, "HammingFilter", 6);
    PyModule_AddIntConstant(m, "BlackmanFilter", 7);
    PyModule_AddIntConstant(m, "GaussianFilter", 8);
    PyModule_AddIntConstant(m, "QuadraticFilter", 9);
    PyModule_AddIntConstant(m, "CubicFilter", 10);
    PyModule_AddIntConstant(m, "CatromFilter", 11);
    PyModule_AddIntConstant(m, "MitchellFilter", 12);
    PyModule_AddIntConstant(m, "JincFilter", 13);
    PyModule_AddIntConstant(m, "SincFilter", 14);
    PyModule_AddIntConstant(m, "SincFastFilter", 15);
    PyModule_AddIntConstant(m, "KaiserFilter", 16);
    PyModule_AddIntConstant(m, "WelshFilter", 17);
    PyModule_AddIntConstant(m, "ParzenFilter", 18);
    PyModule_AddIntConstant(m, "BohmanFilter", 19);
    PyModule_AddIntConstant(m, "BartlettFilter", 20);
    PyModule_AddIntConstant(m, "LagrangeFilter", 21);
    PyModule_AddIntConstant(m, "LanczosFilter", 22);
    PyModule_AddIntConstant(m, "LanczosSharpFilter", 23);
    PyModule_AddIntConstant(m, "Lanczos2Filter", 24);
    PyModule_AddIntConstant(m, "Lanczos2SharpFilter", 25);
    PyModule_AddIntConstant(m, "RobidouxFilter", 26);
    PyModule_AddIntConstant(m, "RobidouxSharpFilter", 27);
    PyModule_AddIntConstant(m, "CosineFilter", 28);
    PyModule_AddIntConstant(m, "SplineFilter", 29);
    PyModule_AddIntConstant(m, "LanczosRadiusFilter", 30);
    PyModule_AddIntConstant(m, "SentinelFilter", 31);
    PyModule_AddIntConstant(m, "UndefinedAlphaChannel", 0);
    PyModule_AddIntConstant(m, "ActivateAlphaChannel", 1);
    PyModule_AddIntConstant(m, "BackgroundAlphaChannel", 2);
    PyModule_AddIntConstant(m, "CopyAlphaChannel", 3);
    PyModule_AddIntConstant(m, "DeactivateAlphaChannel", 4);
    PyModule_AddIntConstant(m, "ExtractAlphaChannel", 5);
    PyModule_AddIntConstant(m, "OpaqueAlphaChannel", 6);
    PyModule_AddIntConstant(m, "ResetAlphaChannel", 7);
    PyModule_AddIntConstant(m, "SetAlphaChannel", 8);
    PyModule_AddIntConstant(m, "ShapeAlphaChannel", 9);
    PyModule_AddIntConstant(m, "TransparentAlphaChannel", 10);
    PyModule_AddIntConstant(m, "FlattenAlphaChannel", 11);
    PyModule_AddIntConstant(m, "RemoveAlphaChannel", 12);
    PyModule_AddIntConstant(m, "AssociateAlphaChannel", 13);
    PyModule_AddIntConstant(m, "DisassociateAlphaChannel", 14);
    PyModule_AddIntConstant(m, "UndefinedType", 0);
    PyModule_AddIntConstant(m, "BilevelType", 1);
    PyModule_AddIntConstant(m, "GrayscaleType", 2);
    PyModule_AddIntConstant(m, "GrayscaleMatteType", 3);
    PyModule_AddIntConstant(m, "PaletteType", 4);
    PyModule_AddIntConstant(m, "PaletteMatteType", 5);
    PyModule_AddIntConstant(m, "TrueColorType", 6);
    PyModule_AddIntConstant(m, "TrueColorMatteType", 7);
    PyModule_AddIntConstant(m, "ColorSeparationType", 8);
    PyModule_AddIntConstant(m, "ColorSeparationMatteType", 9);
    PyModule_AddIntConstant(m, "OptimizeType", 10);
    PyModule_AddIntConstant(m, "PaletteBilevelMatteType", 11);
    PyModule_AddIntConstant(m, "UndefinedInterlace", 0);
    PyModule_AddIntConstant(m, "NoInterlace", 1);
    PyModule_AddIntConstant(m, "LineInterlace", 2);
    PyModule_AddIntConstant(m, "PlaneInterlace", 3);
    PyModule_AddIntConstant(m, "PartitionInterlace", 4);
    PyModule_AddIntConstant(m, "GIFInterlace", 5);
    PyModule_AddIntConstant(m, "JPEGInterlace", 6);
    PyModule_AddIntConstant(m, "PNGInterlace", 7);
    PyModule_AddIntConstant(m, "UndefinedOrientation", 0);
    PyModule_AddIntConstant(m, "TopLeftOrientation", 1);
    PyModule_AddIntConstant(m, "TopRightOrientation", 2);
    PyModule_AddIntConstant(m, "BottomRightOrientation", 3);
    PyModule_AddIntConstant(m, "BottomLeftOrientation", 4);
    PyModule_AddIntConstant(m, "LeftTopOrientation", 5);
    PyModule_AddIntConstant(m, "RightTopOrientation", 6);
    PyModule_AddIntConstant(m, "RightBottomOrientation", 7);
    PyModule_AddIntConstant(m, "LeftBottomOrientation", 8);
    PyModule_AddIntConstant(m, "UndefinedResolution", 0);
    PyModule_AddIntConstant(m, "PixelsPerInchResolution", 1);
    PyModule_AddIntConstant(m, "PixelsPerCentimeterResolution", 2);
    PyModule_AddIntConstant(m, "UndefinedTransmitType", 0);
    PyModule_AddIntConstant(m, "FileTransmitType", 1);
    PyModule_AddIntConstant(m, "BlobTransmitType", 2);
    PyModule_AddIntConstant(m, "StreamTransmitType", 3);
    PyModule_AddIntConstant(m, "ImageTransmitType", 4);
    PyModule_AddIntConstant(m, "UndefinedAlign", 0);
    PyModule_AddIntConstant(m, "LeftAlign", 1);
    PyModule_AddIntConstant(m, "CenterAlign", 2);
    PyModule_AddIntConstant(m, "RightAlign", 3);
    PyModule_AddIntConstant(m, "UndefinedPathUnits", 0);
    PyModule_AddIntConstant(m, "UserSpace", 1);
    PyModule_AddIntConstant(m, "UserSpaceOnUse", 2);
    PyModule_AddIntConstant(m, "ObjectBoundingBox", 3);
    PyModule_AddIntConstant(m, "UndefinedDecoration", 0);
    PyModule_AddIntConstant(m, "NoDecoration", 1);
    PyModule_AddIntConstant(m, "UnderlineDecoration", 2);
    PyModule_AddIntConstant(m, "OverlineDecoration", 3);
    PyModule_AddIntConstant(m, "LineThroughDecoration", 4);
    PyModule_AddIntConstant(m, "UndefinedDirection", 0);
    PyModule_AddIntConstant(m, "RightToLeftDirection", 1);
    PyModule_AddIntConstant(m, "LeftToRightDirection", 2);
    PyModule_AddIntConstant(m, "UndefinedRule", 0);
    PyModule_AddIntConstant(m, "EvenOddRule", 1);
    PyModule_AddIntConstant(m, "NonZeroRule", 2);
    PyModule_AddIntConstant(m, "UndefinedGradient", 0);
    PyModule_AddIntConstant(m, "LinearGradient", 1);
    PyModule_AddIntConstant(m, "RadialGradient", 2);
    PyModule_AddIntConstant(m, "UndefinedCap", 0);
    PyModule_AddIntConstant(m, "ButtCap", 1);
    PyModule_AddIntConstant(m, "RoundCap", 2);
    PyModule_AddIntConstant(m, "SquareCap", 3);
    PyModule_AddIntConstant(m, "UndefinedJoin", 0);
    PyModule_AddIntConstant(m, "MiterJoin", 1);
    PyModule_AddIntConstant(m, "RoundJoin", 2);
    PyModule_AddIntConstant(m, "BevelJoin", 3);
    PyModule_AddIntConstant(m, "UndefinedMethod", 0);
    PyModule_AddIntConstant(m, "PointMethod", 1);
    PyModule_AddIntConstant(m, "ReplaceMethod", 2);
    PyModule_AddIntConstant(m, "FloodfillMethod", 3);
    PyModule_AddIntConstant(m, "FillToBorderMethod", 4);
    PyModule_AddIntConstant(m, "ResetMethod", 5);
    PyModule_AddIntConstant(m, "UndefinedPrimitive", 0);
    PyModule_AddIntConstant(m, "PointPrimitive", 1);
    PyModule_AddIntConstant(m, "LinePrimitive", 2);
    PyModule_AddIntConstant(m, "RectanglePrimitive", 3);
    PyModule_AddIntConstant(m, "RoundRectanglePrimitive", 4);
    PyModule_AddIntConstant(m, "ArcPrimitive", 5);
    PyModule_AddIntConstant(m, "EllipsePrimitive", 6);
    PyModule_AddIntConstant(m, "CirclePrimitive", 7);
    PyModule_AddIntConstant(m, "PolylinePrimitive", 8);
    PyModule_AddIntConstant(m, "PolygonPrimitive", 9);
    PyModule_AddIntConstant(m, "BezierPrimitive", 10);
    PyModule_AddIntConstant(m, "ColorPrimitive", 11);
    PyModule_AddIntConstant(m, "MattePrimitive", 12);
    PyModule_AddIntConstant(m, "TextPrimitive", 13);
    PyModule_AddIntConstant(m, "ImagePrimitive", 14);
    PyModule_AddIntConstant(m, "PathPrimitive", 15);
    PyModule_AddIntConstant(m, "UndefinedReference", 0);
    PyModule_AddIntConstant(m, "GradientReference", 1);
    PyModule_AddIntConstant(m, "UndefinedSpread", 0);
    PyModule_AddIntConstant(m, "PadSpread", 1);
    PyModule_AddIntConstant(m, "ReflectSpread", 2);
    PyModule_AddIntConstant(m, "RepeatSpread", 3);
    PyModule_AddIntConstant(m, "UndefinedDistortion", 0);
    PyModule_AddIntConstant(m, "AffineDistortion", 1);
    PyModule_AddIntConstant(m, "AffineProjectionDistortion", 2);
    PyModule_AddIntConstant(m, "ScaleRotateTranslateDistortion", 3);
    PyModule_AddIntConstant(m, "PerspectiveDistortion", 4);
    PyModule_AddIntConstant(m, "PerspectiveProjectionDistortion", 5);
    PyModule_AddIntConstant(m, "BilinearForwardDistortion", 6);
    PyModule_AddIntConstant(m, "BilinearDistortion", 6);
    PyModule_AddIntConstant(m, "BilinearReverseDistortion", 7);
    PyModule_AddIntConstant(m, "PolynomialDistortion", 8);
    PyModule_AddIntConstant(m, "ArcDistortion", 9);
    PyModule_AddIntConstant(m, "PolarDistortion", 10);
    PyModule_AddIntConstant(m, "DePolarDistortion", 11);
    PyModule_AddIntConstant(m, "Cylinder2PlaneDistortion", 12);
    PyModule_AddIntConstant(m, "Plane2CylinderDistortion", 13);
    PyModule_AddIntConstant(m, "BarrelDistortion", 14);
    PyModule_AddIntConstant(m, "BarrelInverseDistortion", 15);
    PyModule_AddIntConstant(m, "ShepardsDistortion", 16);
    PyModule_AddIntConstant(m, "ResizeDistortion", 17);
    PyModule_AddIntConstant(m, "SentinelDistortion", 18);
    PyModule_AddIntConstant(m, "UndefinedColorInterpolate", 0);
    PyModule_AddIntConstant(m, "BarycentricColorInterpolate", 1);
    PyModule_AddIntConstant(m, "BilinearColorInterpolate", 7);
    PyModule_AddIntConstant(m, "PolynomialColorInterpolate", 8);
    PyModule_AddIntConstant(m, "ShepardsColorInterpolate", 16);
    PyModule_AddIntConstant(m, "VoronoiColorInterpolate", 18);
    PyModule_AddIntConstant(m, "InverseColorInterpolate", 19);
    PyModule_AddIntConstant(m, "UndefinedCompositeOp", 0);
    PyModule_AddIntConstant(m, "NoCompositeOp", 1);
    PyModule_AddIntConstant(m, "ModulusAddCompositeOp", 2);
    PyModule_AddIntConstant(m, "AtopCompositeOp", 3);
    PyModule_AddIntConstant(m, "BlendCompositeOp", 4);
    PyModule_AddIntConstant(m, "BumpmapCompositeOp", 5);
    PyModule_AddIntConstant(m, "ChangeMaskCompositeOp", 6);
    PyModule_AddIntConstant(m, "ClearCompositeOp", 7);
    PyModule_AddIntConstant(m, "ColorBurnCompositeOp", 8);
    PyModule_AddIntConstant(m, "ColorDodgeCompositeOp", 9);
    PyModule_AddIntConstant(m, "ColorizeCompositeOp", 10);
    PyModule_AddIntConstant(m, "CopyBlackCompositeOp", 11);
    PyModule_AddIntConstant(m, "CopyBlueCompositeOp", 12);
    PyModule_AddIntConstant(m, "CopyCompositeOp", 13);
    PyModule_AddIntConstant(m, "CopyCyanCompositeOp", 14);
    PyModule_AddIntConstant(m, "CopyGreenCompositeOp", 15);
    PyModule_AddIntConstant(m, "CopyMagentaCompositeOp", 16);
    PyModule_AddIntConstant(m, "CopyOpacityCompositeOp", 17);
    PyModule_AddIntConstant(m, "CopyRedCompositeOp", 18);
    PyModule_AddIntConstant(m, "CopyYellowCompositeOp", 19);
    PyModule_AddIntConstant(m, "DarkenCompositeOp", 20);
    PyModule_AddIntConstant(m, "DstAtopCompositeOp", 21);
    PyModule_AddIntConstant(m, "DstCompositeOp", 22);
    PyModule_AddIntConstant(m, "DstInCompositeOp", 23);
    PyModule_AddIntConstant(m, "DstOutCompositeOp", 24);
    PyModule_AddIntConstant(m, "DstOverCompositeOp", 25);
    PyModule_AddIntConstant(m, "DifferenceCompositeOp", 26);
    PyModule_AddIntConstant(m, "DisplaceCompositeOp", 27);
    PyModule_AddIntConstant(m, "DissolveCompositeOp", 28);
    PyModule_AddIntConstant(m, "ExclusionCompositeOp", 29);
    PyModule_AddIntConstant(m, "HardLightCompositeOp", 30);
    PyModule_AddIntConstant(m, "HueCompositeOp", 31);
    PyModule_AddIntConstant(m, "InCompositeOp", 32);
    PyModule_AddIntConstant(m, "LightenCompositeOp", 33);
    PyModule_AddIntConstant(m, "LinearLightCompositeOp", 34);
    PyModule_AddIntConstant(m, "LuminizeCompositeOp", 35);
    PyModule_AddIntConstant(m, "MinusDstCompositeOp", 36);
    PyModule_AddIntConstant(m, "ModulateCompositeOp", 37);
    PyModule_AddIntConstant(m, "MultiplyCompositeOp", 38);
    PyModule_AddIntConstant(m, "OutCompositeOp", 39);
    PyModule_AddIntConstant(m, "OverCompositeOp", 40);
    PyModule_AddIntConstant(m, "OverlayCompositeOp", 41);
    PyModule_AddIntConstant(m, "PlusCompositeOp", 42);
    PyModule_AddIntConstant(m, "ReplaceCompositeOp", 43);
    PyModule_AddIntConstant(m, "SaturateCompositeOp", 44);
    PyModule_AddIntConstant(m, "ScreenCompositeOp", 45);
    PyModule_AddIntConstant(m, "SoftLightCompositeOp", 46);
    PyModule_AddIntConstant(m, "SrcAtopCompositeOp", 47);
    PyModule_AddIntConstant(m, "SrcCompositeOp", 48);
    PyModule_AddIntConstant(m, "SrcInCompositeOp", 49);
    PyModule_AddIntConstant(m, "SrcOutCompositeOp", 50);
    PyModule_AddIntConstant(m, "SrcOverCompositeOp", 51);
    PyModule_AddIntConstant(m, "ModulusSubtractCompositeOp", 52);
    PyModule_AddIntConstant(m, "ThresholdCompositeOp", 53);
    PyModule_AddIntConstant(m, "XorCompositeOp", 54);
    PyModule_AddIntConstant(m, "DivideDstCompositeOp", 55);
    PyModule_AddIntConstant(m, "DistortCompositeOp", 56);
    PyModule_AddIntConstant(m, "BlurCompositeOp", 57);
    PyModule_AddIntConstant(m, "PegtopLightCompositeOp", 58);
    PyModule_AddIntConstant(m, "VividLightCompositeOp", 59);
    PyModule_AddIntConstant(m, "PinLightCompositeOp", 60);
    PyModule_AddIntConstant(m, "LinearDodgeCompositeOp", 61);
    PyModule_AddIntConstant(m, "LinearBurnCompositeOp", 62);
    PyModule_AddIntConstant(m, "MathematicsCompositeOp", 63);
    PyModule_AddIntConstant(m, "DivideSrcCompositeOp", 64);
    PyModule_AddIntConstant(m, "MinusSrcCompositeOp", 65);
    PyModule_AddIntConstant(m, "DarkenIntensityCompositeOp", 66);
    PyModule_AddIntConstant(m, "LightenIntensityCompositeOp", 67);
    PyModule_AddIntConstant(m, "HardMixCompositeOp", 68);
    PyModule_AddIntConstant(m, "NoValue", 0);
    PyModule_AddIntConstant(m, "XValue", 1);
    PyModule_AddIntConstant(m, "XiValue", 1);
    PyModule_AddIntConstant(m, "YValue", 2);
    PyModule_AddIntConstant(m, "PsiValue", 2);
    PyModule_AddIntConstant(m, "WidthValue", 4);
    PyModule_AddIntConstant(m, "RhoValue", 4);
    PyModule_AddIntConstant(m, "HeightValue", 8);
    PyModule_AddIntConstant(m, "SigmaValue", 8);
    PyModule_AddIntConstant(m, "ChiValue", 16);
    PyModule_AddIntConstant(m, "XiNegative", 32);
    PyModule_AddIntConstant(m, "XNegative", 32);
    PyModule_AddIntConstant(m, "PsiNegative", 64);
    PyModule_AddIntConstant(m, "YNegative", 64);
    PyModule_AddIntConstant(m, "ChiNegative", 128);
    PyModule_AddIntConstant(m, "PercentValue", 4096);
    PyModule_AddIntConstant(m, "AspectValue", 8192);
    PyModule_AddIntConstant(m, "NormalizeValue", 8192);
    PyModule_AddIntConstant(m, "LessValue", 16384);
    PyModule_AddIntConstant(m, "GreaterValue", 32768);
    PyModule_AddIntConstant(m, "MinimumValue", 65536);
    PyModule_AddIntConstant(m, "CorrelateNormalizeValue", 65536);
    PyModule_AddIntConstant(m, "AreaValue", 131072);
    PyModule_AddIntConstant(m, "DecimalValue", 262144);
    PyModule_AddIntConstant(m, "SeparatorValue", 524288);
    PyModule_AddIntConstant(m, "AllValues", 2147483647);
    PyModule_AddIntConstant(m, "UndefinedGravity", 0);
    PyModule_AddIntConstant(m, "ForgetGravity", 0);
    PyModule_AddIntConstant(m, "NorthWestGravity", 1);
    PyModule_AddIntConstant(m, "NorthGravity", 2);
    PyModule_AddIntConstant(m, "NorthEastGravity", 3);
    PyModule_AddIntConstant(m, "WestGravity", 4);
    PyModule_AddIntConstant(m, "CenterGravity", 5);
    PyModule_AddIntConstant(m, "EastGravity", 6);
    PyModule_AddIntConstant(m, "SouthWestGravity", 7);
    PyModule_AddIntConstant(m, "SouthGravity", 8);
    PyModule_AddIntConstant(m, "SouthEastGravity", 9);
    PyModule_AddIntConstant(m, "StaticGravity", 10);
    PyModule_AddIntConstant(m, "UndefinedColorspace", 0);
    PyModule_AddIntConstant(m, "RGBColorspace", 1);
    PyModule_AddIntConstant(m, "GRAYColorspace", 2);
    PyModule_AddIntConstant(m, "TransparentColorspace", 3);
    PyModule_AddIntConstant(m, "OHTAColorspace", 4);
    PyModule_AddIntConstant(m, "LabColorspace", 5);
    PyModule_AddIntConstant(m, "XYZColorspace", 6);
    PyModule_AddIntConstant(m, "YCbCrColorspace", 7);
    PyModule_AddIntConstant(m, "YCCColorspace", 8);
    PyModule_AddIntConstant(m, "YIQColorspace", 9);
    PyModule_AddIntConstant(m, "YPbPrColorspace", 10);
    PyModule_AddIntConstant(m, "YUVColorspace", 11);
    PyModule_AddIntConstant(m, "CMYKColorspace", 12);
    PyModule_AddIntConstant(m, "sRGBColorspace", 13);
    PyModule_AddIntConstant(m, "HSBColorspace", 14);
    PyModule_AddIntConstant(m, "HSLColorspace", 15);
    PyModule_AddIntConstant(m, "HWBColorspace", 16);
    PyModule_AddIntConstant(m, "Rec601LumaColorspace", 17);
    PyModule_AddIntConstant(m, "Rec601YCbCrColorspace", 18);
    PyModule_AddIntConstant(m, "Rec709LumaColorspace", 19);
    PyModule_AddIntConstant(m, "Rec709YCbCrColorspace", 20);
    PyModule_AddIntConstant(m, "LogColorspace", 21);
    PyModule_AddIntConstant(m, "CMYColorspace", 22);
    PyModule_AddIntConstant(m, "LuvColorspace", 23);
    PyModule_AddIntConstant(m, "HCLColorspace", 24);
    PyModule_AddIntConstant(m, "LCHColorspace", 25);
    PyModule_AddIntConstant(m, "LMSColorspace", 26);
    PyModule_AddIntConstant(m, "LCHabColorspace", 27);
    PyModule_AddIntConstant(m, "LCHuvColorspace", 28);
    PyModule_AddIntConstant(m, "scRGBColorspace", 29);
    PyModule_AddIntConstant(m, "HSIColorspace", 30);
    PyModule_AddIntConstant(m, "HSVColorspace", 31);
    PyModule_AddIntConstant(m, "HCLpColorspace", 32);
    PyModule_AddIntConstant(m, "YDbDrColorspace", 33);
    PyModule_AddIntConstant(m, "xyYColorspace", 34);
    PyModule_AddIntConstant(m, "UndefinedMetric", 0);
    PyModule_AddIntConstant(m, "AbsoluteErrorMetric", 1);
    PyModule_AddIntConstant(m, "MeanAbsoluteErrorMetric", 2);
    PyModule_AddIntConstant(m, "MeanErrorPerPixelMetric", 3);
    PyModule_AddIntConstant(m, "MeanSquaredErrorMetric", 4);
    PyModule_AddIntConstant(m, "PeakAbsoluteErrorMetric", 5);
    PyModule_AddIntConstant(m, "PeakSignalToNoiseRatioMetric", 6);
    PyModule_AddIntConstant(m, "RootMeanSquaredErrorMetric", 7);
    PyModule_AddIntConstant(m, "NormalizedCrossCorrelationErrorMetric", 8);
    PyModule_AddIntConstant(m, "FuzzErrorMetric", 9);
    PyModule_AddIntConstant(m, "UndefinedErrorMetric", 0);
    PyModule_AddIntConstant(m, "PerceptualHashErrorMetric", 255);
    PyModule_AddIntConstant(m, "UndefinedCompression", 0);
    PyModule_AddIntConstant(m, "NoCompression", 1);
    PyModule_AddIntConstant(m, "BZipCompression", 2);
    PyModule_AddIntConstant(m, "DXT1Compression", 3);
    PyModule_AddIntConstant(m, "DXT3Compression", 4);
    PyModule_AddIntConstant(m, "DXT5Compression", 5);
    PyModule_AddIntConstant(m, "FaxCompression", 6);
    PyModule_AddIntConstant(m, "Group4Compression", 7);
    PyModule_AddIntConstant(m, "JPEGCompression", 8);
    PyModule_AddIntConstant(m, "JPEG2000Compression", 9);
    PyModule_AddIntConstant(m, "LosslessJPEGCompression", 10);
    PyModule_AddIntConstant(m, "LZWCompression", 11);
    PyModule_AddIntConstant(m, "RLECompression", 12);
    PyModule_AddIntConstant(m, "ZipCompression", 13);
    PyModule_AddIntConstant(m, "ZipSCompression", 14);
    PyModule_AddIntConstant(m, "PizCompression", 15);
    PyModule_AddIntConstant(m, "Pxr24Compression", 16);
    PyModule_AddIntConstant(m, "B44Compression", 17);
    PyModule_AddIntConstant(m, "B44ACompression", 18);
    PyModule_AddIntConstant(m, "LZMACompression", 19);
    PyModule_AddIntConstant(m, "JBIG1Compression", 20);
    PyModule_AddIntConstant(m, "JBIG2Compression", 21);
    PyModule_AddIntConstant(m, "UndefinedDitherMethod", 0);
    PyModule_AddIntConstant(m, "NoDitherMethod", 1);
    PyModule_AddIntConstant(m, "RiemersmaDitherMethod", 2);
    PyModule_AddIntConstant(m, "FloydSteinbergDitherMethod", 3);
}
