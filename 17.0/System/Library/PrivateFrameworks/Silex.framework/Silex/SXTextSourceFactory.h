@class NSString;
@protocol SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory;

@interface SXTextSourceFactory : NSObject <SXTextSourceFactory>

@property (readonly, nonatomic) id<SXSmartFieldFactory> smartFieldFactory;
@property (readonly, nonatomic) id<SXDocumentLanguageProviding> documentLanguageProvider;
@property (readonly, nonatomic) id<SXFontAttributesConstructor> fontAttributesConstructor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createTextSourceWithString:(id)a0 dataSource:(id)a1;
- (id)initWithSmartFieldFactory:(id)a0 documentLanguageProvider:(id)a1 fontAttributesConstructor:(id)a2;

@end
