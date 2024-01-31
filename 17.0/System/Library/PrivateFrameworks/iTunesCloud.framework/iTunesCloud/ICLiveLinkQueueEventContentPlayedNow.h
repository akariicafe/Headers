@class NSString, NSArray;

@interface ICLiveLinkQueueEventContentPlayedNow : NSObject

@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) long long containerKind;
@property (readonly, copy, nonatomic) NSString *containerMediaIdentifier;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (readonly, copy, nonatomic) NSString *startItemIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithItemIdentifiers:(id)a0 containerKind:(long long)a1 containerIdentifier:(id)a2 containerMediaIdentifier:(id)a3 startItemIdentifier:(id)a4;

@end
