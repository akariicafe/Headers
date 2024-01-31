@class NSString, ICCRRegisterLatest;
@protocol ICCRDataType, ICCRCoding;

@interface ICCROrderedSetElement : NSObject <ICCRDataType, NSCopying, ICCREquatable>

@property (retain, nonatomic) id<ICCRDataType, ICCRCoding> value;
@property (retain, nonatomic) ICCRRegisterLatest *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)temporaryElementWithValue:(id)a0;

- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)setDocument:(id)a0;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeIntoProtobufSetElement:(void *)a0 coder:(id)a1;
- (id)initWithProtobufSetElement:(const void *)a0 decoder:(id)a1;

@end
