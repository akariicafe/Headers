@class NSNumber, NSString, ICSQLiteStatement;

@interface ICSQLiteQueryResults : NSObject <ICSQLiteBinding> {
    ICSQLiteStatement *_statement;
}

@property (readonly, nonatomic) long long firstInt64Value;
@property (readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property (readonly, copy, nonatomic) NSString *firstStringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindDataCopy:(id)a0 atPosition:(int)a1;
- (void)bindFloat:(float)a0 atPosition:(int)a1;
- (int)clearBindings;
- (void)bindInt:(int)a0 atPosition:(int)a1;
- (void)bindString:(id)a0 atPosition:(int)a1;
- (void)bindStringCopy:(id)a0 atPosition:(int)a1;
- (void)enumerateRowsUsingBlock:(id /* block */)a0;
- (void)bindNumber:(id)a0 atPosition:(int)a1;
- (void)bindNullAtPosition:(int)a0;
- (void)bindInt64:(long long)a0 atPosition:(int)a1;
- (void)bindDouble:(double)a0 atPosition:(int)a1;
- (void).cxx_destruct;
- (void)bindData:(id)a0 atPosition:(int)a1;
- (id)initWithStatement:(id)a0;

@end
