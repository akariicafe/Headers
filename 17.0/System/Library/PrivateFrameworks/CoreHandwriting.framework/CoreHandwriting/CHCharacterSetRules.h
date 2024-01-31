@class NSObject, NSCharacterSet;
@protocol OS_dispatch_queue;

@interface CHCharacterSetRules : NSObject {
    NSCharacterSet *_lowercaseCharSet;
    NSCharacterSet *_uppercaseCharSet;
    NSCharacterSet *_digitCharSet;
    NSCharacterSet *_startPunctuationCharSet;
    NSCharacterSet *_middlePunctuationCharSet;
    NSCharacterSet *_endOfWordPunctuationCharSet;
    NSCharacterSet *_endOfSentencePunctuationCharSet;
    NSCharacterSet *_digitStartPunctuationCharSet;
    NSCharacterSet *_digitEndPunctuationCharSet;
    NSCharacterSet *_arithmeticOperatorCharSet;
    NSCharacterSet *_dateTimeSeparatorCharSet;
    NSCharacterSet *_dateTimeEndLetterCharSet;
    NSCharacterSet *_numeralEndLetterCharSet;
    NSCharacterSet *_lexiconSkipCharSet;
    NSCharacterSet *_containsDotCharSet;
    NSCharacterSet *_containsTwoDotsCharSet;
    NSCharacterSet *_prefixCapitalizationExceptionCharSet;
    NSCharacterSet *_selfLoopPunctuationCharSet;
    NSCharacterSet *_emoticonTopCharSet;
    NSCharacterSet *_emoticonMiddleCharSet;
    NSCharacterSet *_emoticonBottomCharSet;
    NSCharacterSet *_emailAtCharSet;
    NSCharacterSet *_emailPunctuationCharSet;
    NSCharacterSet *_urlPunctuationCharSet;
    NSCharacterSet *_nonSpaceSeparatorCharSet;
    NSCharacterSet *_punctuationThatNeedSpaceCleanup;
    NSCharacterSet *_currencySymbols;
    NSCharacterSet *_symbolsRequiringSpaceBeforeInFrench;
    NSCharacterSet *_sentenceStartPunctuationInSpanish;
    NSCharacterSet *_commonJapaneseSymbols;
    NSCharacterSet *_CJKPairedPunctuationsCharSet;
    NSCharacterSet *_alphaNumericCharSet;
    NSObject<OS_dispatch_queue> *__charSetRulesQueue;
    struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _strokeMaxPenalties;
    struct map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> { struct __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _signatureUniChar;
}

+ (unsigned long long)characterType:(unsigned int)a0;
+ (unsigned long long)characterTypeFromString:(id)a0;
+ (unsigned long long)expectedMaxDotCount:(unsigned int)a0;
+ (unsigned long long)expectedMaxStrokeCount:(unsigned int)a0;
+ (unsigned long long)expectedMinStrokeCount:(unsigned int)a0;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
