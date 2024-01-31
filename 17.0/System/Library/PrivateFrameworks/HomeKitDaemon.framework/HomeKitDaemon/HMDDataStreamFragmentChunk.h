@class NSString, NSDictionary, NSData, NSNumber;

@interface HMDDataStreamFragmentChunk : HMFObject <NSCopying>

@property (readonly) NSData *data;
@property (readonly, copy) NSNumber *sequenceNumber;
@property (readonly, copy) NSNumber *fragmentSequenceNumber;
@property (readonly, copy) NSString *type;
@property (readonly, getter=isLast) BOOL last;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 sequenceNumber:(id)a1 fragmentSequenceNumber:(id)a2 type:(id)a3 isLast:(BOOL)a4;

@end
