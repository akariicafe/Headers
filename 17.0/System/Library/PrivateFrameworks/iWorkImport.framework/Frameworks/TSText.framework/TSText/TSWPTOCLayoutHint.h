@class NSString;
@protocol TSDHint;

@interface TSWPTOCLayoutHint : NSObject <TSDHint>

@property (class, readonly, nonatomic) Class archivedHintClass;

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } charRange;
@property (readonly, nonatomic) id<TSDHint> firstChildHint;
@property (readonly, nonatomic) id<TSDHint> lastChildHint;
@property (readonly, nonatomic) BOOL isFirstHint;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } effectiveSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
