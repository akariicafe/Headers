@class NSString, NSArray;

@interface CNAutocompleteSupplementalGroup : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSArray *groupMembers;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 members:(id)a2;

@end
