@class NSString, MPModelStoreBrowseContentItem, MusicKit_SoftLinking_MPModelObject;

@interface MusicKit_SoftLinking_MPModelStoreBrowseContentItem : NSObject <MusicKit_SoftLinking_MPSectionedCollectionObject> {
    MPModelStoreBrowseContentItem *_underlyingItem;
}

@property (readonly, nonatomic) MPModelStoreBrowseContentItem *_underlyingObject;
@property (readonly, nonatomic) MusicKit_SoftLinking_MPModelObject *innerObject;
@property (readonly, nonatomic) id underlyingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_genericObjectTypeForItemType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithInnerObject:(id)a0;

@end
