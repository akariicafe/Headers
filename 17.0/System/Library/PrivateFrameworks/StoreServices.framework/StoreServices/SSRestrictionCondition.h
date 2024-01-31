@class NSString;

@interface SSRestrictionCondition : SSProtocolCondition {
    NSString *_restrictionName;
}

- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (BOOL)evaluateWithContext:(id)a0;

@end
