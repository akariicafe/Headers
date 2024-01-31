@class NSString, DOMStyleSheet;

@interface DOMProcessingInstruction : DOMCharacterData

@property (readonly, copy) NSString *target;
@property (readonly) DOMStyleSheet *sheet;

@end
