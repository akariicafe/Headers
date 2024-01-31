@interface CKCalendarMediaObject : CKCardMediaObject

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;

- (id)subtitle;
- (int)mediaType;
- (id)attachmentSummary:(unsigned long long)a0;
- (BOOL)shouldBeQuickLooked;

@end
