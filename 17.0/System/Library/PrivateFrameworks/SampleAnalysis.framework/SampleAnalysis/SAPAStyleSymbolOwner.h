@class NSString;

@interface SAPAStyleSymbolOwner : NSObject <SASerializable> {
    BOOL _hasTextExecSegment;
    unsigned long long _textSegmentLength;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)classDictionaryKey;

@end
