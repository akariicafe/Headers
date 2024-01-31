@class NSString, NSDate;

@interface WFWorkflowQuarantine : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier;
@property (readonly, nonatomic) NSDate *importDate;

- (id)serializedRepresentation;
- (id)serializedData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerializedData:(id)a0;
- (id)initWithSourceAppIdentifier:(id)a0 importDate:(id)a1;

@end
