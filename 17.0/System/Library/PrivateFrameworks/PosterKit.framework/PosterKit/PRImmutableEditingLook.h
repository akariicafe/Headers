@class NSString, PREditingLookProperties;

@interface PRImmutableEditingLook : PREditingLook {
    NSString *_identifier;
    NSString *_displayName;
    PREditingLookProperties *_initialProperties;
}

- (id)identifier;
- (void).cxx_destruct;
- (id)displayName;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 initialTimeFontConfiguration:(id)a2 initialTitleColor:(id)a3;
- (id)initialProperties;

@end
