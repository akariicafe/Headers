@class NSString, NSArray;
@protocol NSCopying;

@interface PKPayLaterStackedLabelRow : NSObject <PKPayLaterCollectionViewRow> {
    NSArray *_sources;
}

@property (nonatomic) double paddingBetweenRows;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (void).cxx_destruct;
- (id)initWithSources:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)configureCell:(id)a0;

@end
