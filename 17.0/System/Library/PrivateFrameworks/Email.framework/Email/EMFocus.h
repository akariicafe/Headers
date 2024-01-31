@class NSSet;

@interface EMFocus : NSObject

@property (readonly, copy, nonatomic) NSSet *focusedAccountIdentifiers;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFocusedAccountIdentifiers:(id)a0;
- (BOOL)isFocusedIdentifier:(id)a0;

@end
