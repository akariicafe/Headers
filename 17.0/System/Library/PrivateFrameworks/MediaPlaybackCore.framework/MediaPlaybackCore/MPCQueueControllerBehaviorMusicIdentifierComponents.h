@class NSString;

@interface MPCQueueControllerBehaviorMusicIdentifierComponents : NSObject <NSCopying, NSObject>

@property (readonly, copy, nonatomic) NSString *loadingSectionID;
@property (readonly, copy, nonatomic) NSString *itemSpecificContentItemID;
@property (readonly, copy, nonatomic) NSString *deferredNextContentItemID;
@property (readonly, nonatomic) long long repeatIteration;
@property (readonly, nonatomic) unsigned long long uid;
@property (readonly, nonatomic) unsigned short behaviorFlags;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *contentItemID;
@property (readonly, copy, nonatomic) NSString *sectionID;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemComponentsWithSectionID:(id)a0 itemID:(id)a1;
+ (id)placeholderComponentsWithLoadingSectionID:(id)a0;

- (id)_copy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithContentItemID:(id)a0 sectionID:(id)a1 itemID:(id)a2 repeatIteration:(long long)a3 type:(long long)a4 loadingSectionID:(id)a5 itemSpecificContentItemID:(id)a6 deferredNextContentItemID:(id)a7;
- (id)copyAsDeferredWithLoadingSectionID:(id)a0;
- (id)copyAsPlaceholder;
- (id)copyWithBehaviorFlags:(unsigned short)a0;
- (id)copyWithRepeatIteration:(long long)a0;

@end
