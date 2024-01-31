@class NSString;

@interface SCKRecordFieldSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) Class valueClass;
@property (nonatomic, getter=isRequired) BOOL required;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 valueClass:(Class)a1 required:(BOOL)a2 encrypted:(BOOL)a3;
- (BOOL)isValidRecord:(id)a0;

@end
