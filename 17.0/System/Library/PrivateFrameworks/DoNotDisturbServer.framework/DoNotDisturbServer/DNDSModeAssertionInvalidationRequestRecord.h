@class DNDSModeAssertionInvalidationDetailsRecord, NSString, DNDSModeAssertionSourceRecord, DNDSModeAssertionInvalidationPredicateRecord, NSNumber;

@interface DNDSModeAssertionInvalidationRequestRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *UUID;
@property (retain, nonatomic) DNDSModeAssertionInvalidationPredicateRecord *predicate;
@property (retain, nonatomic) NSNumber *requestDate;
@property (retain, nonatomic) DNDSModeAssertionInvalidationDetailsRecord *details;
@property (retain, nonatomic) DNDSModeAssertionSourceRecord *source;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *reasonOverride;

+ (id)recordForDictionary:(id)a0 keys:(const struct { struct { id x0; id x1; id x2; } x0; struct { id x0; id x1; id x2; id x3; } x1; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x2; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; } x3; struct { id x0; id x1; } x4; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x5; struct { id x0; } x6; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; } x7; struct { id x0; id x1; id x2; id x3; } x8; } *)a1;
+ (id)recordForInvalidationRequest:(id)a0;

- (id)object;
- (void).cxx_destruct;
- (id)dictionaryWithKeys:(const struct { struct { id x0; id x1; id x2; } x0; struct { id x0; id x1; id x2; id x3; } x1; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x2; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; } x3; struct { id x0; id x1; } x4; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x5; struct { id x0; } x6; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; } x7; struct { id x0; id x1; id x2; id x3; } x8; } *)a0 options:(unsigned long long)a1;

@end
