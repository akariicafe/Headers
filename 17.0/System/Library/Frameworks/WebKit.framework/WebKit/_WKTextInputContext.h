@interface _WKTextInputContext : NSObject <NSCopying> {
    struct ElementContext { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } boundingRect; struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } webPageIdentifier; struct ProcessQualified<WTF::UUID> { struct UUID { unsigned __int128 m_data; } m_object; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } m_processIdentifier; } documentIdentifier; struct ObjectIdentifierGeneric<WebCore::ElementIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } elementIdentifier; } _textInputContext;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;

- (id)init;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithTextInputContext:(const void *)a0;
- (const void *)_textInputContext;

@end
