@class NSString, NSDateInterval;

@interface PGChapterTitle : NSObject

@property (readonly, nonatomic) NSString *localizedTitleString;
@property (readonly, nonatomic) NSDateInterval *chapterDateInterval;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocalizedTitleString:(id)a0 chapterDateInterval:(id)a1;

@end
