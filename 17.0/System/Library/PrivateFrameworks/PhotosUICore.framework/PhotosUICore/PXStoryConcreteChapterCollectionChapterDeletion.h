@class NSObject;
@protocol NSCopying;

@interface PXStoryConcreteChapterCollectionChapterDeletion : NSObject <PXStoryChapterCollectionChapterDeletion>

@property (readonly, nonatomic) NSObject<NSCopying> *deletedChapterIdentifier;
@property (readonly, nonatomic) long long kind;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDeletedChapterIdentifier:(id)a0;

@end
