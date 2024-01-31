@class NSString, NSCharacterSet;

@interface TSCEStringManipulator : NSObject {
    NSString *_straightQuote;
    NSString *_straightQuoteEscaped;
    NSString *_fullwidthApostrophe;
    NSString *_fullwidthApostropheEscaped;
    NSString *_rightSingleQuotationMark;
    NSString *_rightSingleQuotationMarkEscaped;
    NSString *_leftSingleQuotationMark;
    NSString *_leftSingleQuotationMarkEscaped;
    NSString *_temporaryStraightQuoteString;
    NSString *_temporaryFullwidthApostropheString;
    NSString *_temporaryLeftSingleQuoteString;
    NSString *_temporaryRightSingleQuoteString;
    NSCharacterSet *_singleQuoteCharacterSet;
    NSCharacterSet *_periodCharacterSet;
    NSCharacterSet *_colonCharacterSet;
    NSCharacterSet *_asciiSpaceCharacterSet;
    NSCharacterSet *_intlWhitespaceCharacterSet;
    NSCharacterSet *_singleQuoteOrWhitespaceCharacterSet;
    NSCharacterSet *_singleCurlyQuoteCharacterSet;
    NSCharacterSet *_doubleCurlyQuoteCharacterSet;
    NSCharacterSet *_requiringSingleQuotesCharacterSet;
}

- (id)init;
- (void).cxx_destruct;

@end
