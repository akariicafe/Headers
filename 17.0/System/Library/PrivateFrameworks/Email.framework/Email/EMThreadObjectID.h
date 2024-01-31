@class NSString, EMThreadScope;
@protocol EMCollectionItemID;

@interface EMThreadObjectID : EMObjectID <EFPubliclyDescribable>

@property (readonly, nonatomic) id<EMCollectionItemID> collectionItemID;
@property (readonly, nonatomic) long long conversationID;
@property (readonly, copy, nonatomic) EMThreadScope *threadScope;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)_threadCollectionItemID;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithConversationID:(long long)a0 threadScope:(id)a1;
- (id)initWithCollectionItemID:(id)a0 threadScope:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
