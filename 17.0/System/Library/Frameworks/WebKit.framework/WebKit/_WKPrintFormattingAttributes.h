@interface _WKPrintFormattingAttributes : NSObject

@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } m_object; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } m_processIdentifier; } frameID;
@property (readonly, nonatomic) struct PrintInfo { float pageSetupScaleFactor; float availablePaperWidth; float availablePaperHeight; struct RectEdges<float> { struct array<float, 4UL> { float __elems_[4]; } m_sides; } margin; BOOL snapshotFirstPage; } printInfo;

- (id).cxx_construct;
- (id)initWithPageCount:(unsigned long long)a0 frameID:(struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x0; } x0; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x0; } x1; })a1 printInfo:(struct PrintInfo { float x0; float x1; float x2; struct RectEdges<float> { struct array<float, 4UL> { float x0[4]; } x0; } x3; BOOL x4; })a2;

@end
