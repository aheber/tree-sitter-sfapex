"""Salesforce Apex, SOQL, SOSL, and SFLog grammars for tree-sitter"""

from ._binding import language_apex, language_soql, language_sosl, language_sflog

__all__ = ["language_apex", "language_soql", "language_sosl", "language_sflog"]
