@interface ATCRTResponseSFWf : ATCRTResponse

@property (readonly) unsigned int bytesWritten;

- (id)description;
- (id)initWithOutput:(struct ATCRTTaskSFWfOutput { unsigned int x0; } *)a0;

@end
