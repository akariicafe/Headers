@class NSData, NSNumber, NSString;

@interface HMDDataStreamFragment : HMFObject <NSCopying>

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSNumber *sequenceNumber;
@property (readonly, copy) NSString *type;
@property (readonly, getter=isInitial) BOOL initial;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 sequenceNumber:(id)a1 type:(id)a2;

@end
