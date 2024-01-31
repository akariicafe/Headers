@interface BWSWFRProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    int version;
}

@property (nonatomic) int version;
@property (nonatomic) int lossyCompressionLevel;

- (void)dealloc;

@end
