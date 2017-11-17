//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSAttributedString, NSMutableAttributedString, NSMutableString, NSString;

@interface _FormatFlowedWriter : NSObject
{
    NSMutableString *_outputString;
    NSMutableString *_quotedString;
    NSMutableString *_lineString;
    NSMutableAttributedString *_attributedString;
    BOOL _addedTrailingSpaces;
    NSAttributedString *_inputAttributedString;
    unsigned long long _encoding;
    NSString *_inputString;
    unsigned long long _quoteLevel;
    struct _NSRange _paragraphRange;
}

@property(nonatomic) struct _NSRange paragraphRange; // @synthesize paragraphRange=_paragraphRange;
@property(nonatomic) unsigned long long quoteLevel; // @synthesize quoteLevel=_quoteLevel;
@property(copy, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
@property(readonly, nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(readonly, copy, nonatomic) NSAttributedString *inputAttributedString; // @synthesize inputAttributedString=_inputAttributedString;
@property(nonatomic) BOOL addedTrailingSpaces; // @synthesize addedTrailingSpaces=_addedTrailingSpaces;
//- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *quotedString;
@property(readonly, copy, nonatomic) NSString *outputString;
- (void)_outputQuotedParagraph;
- (unsigned long long)_findLineBreakInRange:(struct _NSRange)arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(BOOL)arg3;
- (id)init;
- (id)initWithAttributedString:(id)arg1 encoding:(unsigned long long)arg2;

@end

