@interface ATCRTResponseSFWd : ATCRTResponse

@property (readonly) unsigned int bytesWritten;

- (id)description;
- (id)initWithOutput:(struct ATCRTTaskSFWdOutput { unsigned int x0; } *)a0;

@end
