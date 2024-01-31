@class NSString;

@interface PLPhotosHighlightTitleGenerator : NSObject <PLPhotosHighlightTitleGeneratorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleForHighlight:(id)a0 filter:(unsigned short)a1 dateRangeTitleGenerator:(id)a2 options:(unsigned long long)a3;
+ (BOOL)canUseSharingComposition:(short)a0 forPhotosHighlightFilter:(unsigned short)a1;


@end
