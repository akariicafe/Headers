@class TSKAnnotationAuthor, NSDate;

@interface TSWPChangeSession : TSPObject {
    unsigned int _sessionUID;
    TSKAnnotationAuthor *_author;
    NSDate *_date;
}

@property (nonatomic) unsigned int sessionUID;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (retain, nonatomic) NSDate *date;

- (void)dealloc;
- (BOOL)isEqualToSession:(id)a0;

@end
