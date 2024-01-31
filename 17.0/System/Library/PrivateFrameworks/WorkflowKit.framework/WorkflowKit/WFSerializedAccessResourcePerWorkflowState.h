@class NSString, NSData, NSDictionary;

@interface WFSerializedAccessResourcePerWorkflowState : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 data:(id)a1;

@end
