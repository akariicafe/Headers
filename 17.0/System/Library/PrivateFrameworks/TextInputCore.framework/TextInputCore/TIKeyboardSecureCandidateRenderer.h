@class CAContext, NSMutableDictionary, NSString;

@interface TIKeyboardSecureCandidateRenderer : NSObject {
    NSMutableDictionary *_accessibilityLabelCache;
}

@property (retain, nonatomic) NSMutableDictionary *secureCandidateCache;
@property (readonly, nonatomic) CAContext *context;
@property (retain, nonatomic) NSString *localeIdentifier;

+ (id)allRenderers;

- (id)localizedStringForKey:(id)a0;
- (id)slotIDsFromSecureCandidates:(id)a0 withRenderTraits:(id)a1;
- (id)init;
- (id)accessibilityLabelForSlotID:(unsigned int)a0;
- (void)dealloc;
- (void)createContext;
- (unsigned int)slotIDForSendCurrentLocationWithRenderTraits:(id)a0;
- (id)cachedPayloadForSecureCandidateSlotID:(unsigned int)a0;
- (struct __CFArray { } *)imagesFromContexts:(struct __CFArray { } *)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)accessibilityLabelsForSecureHeaders:(id)a0 secureContents:(id)a1 truncationSentinel:(id)a2;
- (id)_truncationSentinel;
- (id)updateCachedCandidate:(id)a0 withCandidateString:(id)a1;
- (void)cacheAccessibilityLabel:(id)a0 forSlotID:(unsigned int)a1;
- (struct __CFArray { } *)imagesFromSecureCandidates:(id)a0 withRenderTraits:(id)a1 outAccessibilityLabels:(id *)a2;
- (void).cxx_destruct;
- (struct __CFArray { } *)arrayOfContexts:(unsigned long long)a0 withRenderTraits:(id)a1;
- (struct CGImage { } *)imageForSendCurrentLocationWithRenderTraits:(id)a0;
- (id)cachedCandidateForSecureCandidate:(id)a0;
- (id)localizedApplicationNameWithBundleIdentifier:(id)a0;
- (void)clearSecureCandidateCache;
- (void)recreateContext;
- (id)initForLocalizedStrings;

@end
