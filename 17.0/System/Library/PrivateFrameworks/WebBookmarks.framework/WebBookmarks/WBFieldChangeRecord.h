@class NSDictionary, WBSCRDTField, CKRecord;

@interface WBFieldChangeRecord : NSObject

@property (readonly, nonatomic) WBSCRDTField *field;
@property (readonly, nonatomic) int changeType;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) long long identifier;

- (void).cxx_destruct;
- (id)initWithField:(id)a0 changeType:(int)a1 attributes:(id)a2 record:(id)a3 identifier:(long long)a4;

@end
