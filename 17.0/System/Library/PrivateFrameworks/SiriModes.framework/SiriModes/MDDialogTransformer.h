@class NSDictionary;

@interface MDDialogTransformer : NSObject

@property (class, retain, nonatomic) NSDictionary *dialogIdentifiers;

+ (id)_analytics;
+ (id)_configurationDictionary;
+ (id)transformAddDialogs:(id)a0 forMode:(unsigned long long)a1;
+ (id)transformAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (id)_addViewsForAddDialogs:(id)a0 views:(id)a1;
+ (BOOL)_alwaysPrintSiriResponse;
+ (id)_firstSnippetInViews:(id)a0;
+ (void)_logModeComputationForAceCommand:(id)a0 mode:(unsigned long long)a1;
+ (id)_redundantDUCIds;
+ (id)_removeRedundantUtteranceViewsFromAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (id)_removeSpeakableTextFromAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (id)_removeUtteranceViewsFromAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (id)_sayItForDialog:(id)a0;
+ (BOOL)_shouldTransformLegacyAddViews;
+ (id)_speakableTextForDialog:(id)a0 mode:(unsigned long long)a1;
+ (id)_transformDialogAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (id)_transformLegacyAddViews:(id)a0 forMode:(unsigned long long)a1;
+ (unsigned long long)_typeOfAddViews:(id)a0;
+ (id)_utteranceViewForDialog:(id)a0 mode:(unsigned long long)a1 printedOnly:(BOOL)a2;
+ (BOOL)supportsTransformationForAceCommand:(id)a0;

@end
