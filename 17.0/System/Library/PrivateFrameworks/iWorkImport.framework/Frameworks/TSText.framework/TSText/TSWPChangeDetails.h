@class NSString, TSWPChange, NSDate, TSKAnnotationAuthor;

@interface TSWPChangeDetails : NSObject <TSDChangeDetails>

@property (retain, nonatomic) NSDate *dateForLastChangeStringUpdate;
@property (retain, nonatomic) NSString *changeTrackingContentString;
@property (retain, nonatomic) NSString *changeTrackingTitleString;
@property (retain, nonatomic) NSString *formattedString;
@property (retain, nonatomic) TSWPChange *change;
@property (readonly, nonatomic) NSString *changeTrackingContentFormatString;
@property (readonly, nonatomic) NSString *annotationUUID;
@property (readonly, nonatomic) NSString *parentUUID;
@property (readonly, nonatomic) int annotationType;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithChange:(id)a0;
- (void)commentWillBeAddedToDocumentRoot;
- (BOOL)isEquivalentToObject:(id)a0;
- (BOOL)isFloatingComment;
- (BOOL)isInDocument;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })p_rangeInStorage;
- (void)p_updateChangeStrings;

@end
