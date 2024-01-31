@class NSArray, NSString;

@interface SXDocumentFontFamilyProvider : NSObject <SXFontFamilyProvider>

@property (readonly, nonatomic) NSArray *fonts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
