@class NSString;

@interface SGEmailAddress : SGLabeledObject

@property (readonly, nonatomic) NSString *emailAddress;

+ (BOOL)supportsSecureCoding;
+ (id)emailAddress:(id)a0 label:(id)a1 extractionInfo:(id)a2 withRecordId:(id)a3;
+ (id)emailAddress:(id)a0 label:(id)a1 extractionType:(unsigned long long)a2 withRecordId:(id)a3;
+ (id)emailAddress:(id)a0 label:(id)a1 extractionType:(unsigned long long)a2 withRecordId:(id)a3 origin:(id)a4;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEmailAddress:(id)a0 label:(id)a1 extractionInfo:(id)a2 recordId:(id)a3;
- (BOOL)isEqualToEmailAddress:(id)a0;

@end
