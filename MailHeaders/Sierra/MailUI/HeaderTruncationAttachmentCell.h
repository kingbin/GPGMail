//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachmentCell.h"

@interface HeaderTruncationAttachmentCell : NSTextAttachmentCell
{
    BOOL _truncatesAllRecipients;	// 40 = 0x28
    unsigned long long _truncatedRecipients;	// 48 = 0x30
    BOOL _showWithNoTruncation;	// 56 = 0x38
    double _fontSize;	// 64 = 0x40
}

@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void)_updateTitle;	// IMP=0x0000000100195c4a
@property(nonatomic) BOOL showWithNoTruncation; // @synthesize showWithNoTruncation=_showWithNoTruncation;
@property(nonatomic) BOOL truncatesAllRecipients;
@property(nonatomic) unsigned long long truncatedRecipients;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x000000010004dfc7
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;	// IMP=0x000000010004dd05
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;	// IMP=0x000000010004df76
- (struct CGSize)cellSize;	// IMP=0x0000000100195b50
- (struct CGPoint)cellBaselineOffset;	// IMP=0x000000010004dd7d
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;	// IMP=0x000000010004ddde
- (id)_textAttributes;	// IMP=0x000000010004de87
- (id)init;	// IMP=0x0000000100195af1

@end
